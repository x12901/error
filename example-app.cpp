// Copyright (c) Facebook, Inc. and its affiliates. All Rights Reserved

#include <c10/util/Flags.h>
#include <caffe2/core/blob.h>
#include <caffe2/core/common.h>
#include <caffe2/core/init.h>
#include <caffe2/core/net.h>
#include <caffe2/core/workspace.h>
#include <caffe2/core/context_gpu.h>
#include <caffe2/utils/proto_utils.h>

#include <opencv2/opencv.hpp>
#include <cassert>
#include <chrono>
#include <iostream>
#include <string>
#include <math.h>

C10_DEFINE_string(predict_net, "", "path to model.pb");
C10_DEFINE_string(init_net, "", "path to model_init.pb");
C10_DEFINE_string(input, "", "path to input image");

using namespace std;
using namespace caffe2;

int main(int argc, char** argv) {
  caffe2::GlobalInit(&argc, &argv);
  string predictNetPath = FLAGS_predict_net;
  string initNetPath = FLAGS_init_net;
  cv::Mat input = cv::imread(FLAGS_input, cv::IMREAD_COLOR);

  const int height = input.rows;
  const int width = input.cols;
  // FPN models require divisibility of 32
  assert(height % 32 == 0 && width % 32 == 0);
  const int batch = 1;
  const int channels = 3;

  // initialize Net and Workspace
  caffe2::NetDef initNet_, predictNet_;
  CAFFE_ENFORCE(ReadProtoFromFile(initNetPath, &initNet_));
  CAFFE_ENFORCE(ReadProtoFromFile(predictNetPath, &predictNet_));
 

  Workspace workSpace;
  for (auto& str : predictNet_.external_input()) { 
    workSpace.CreateBlob(str);
  }

   for (auto& str : predictNet_.external_output()) {
    cout<<"name is: "<<str<<endl;
  }
  
  CAFFE_ENFORCE(workSpace.CreateNet(predictNet_));
  CAFFE_ENFORCE(workSpace.RunNetOnce(initNet_));

  // setup inputs
  auto data = BlobGetMutableTensor(workSpace.GetBlob("data"), caffe2::CPU);
  data->Resize(batch, channels, height, width);
  float* ptr = data->mutable_data<float>();
  // HWC to CHW
  for (int c = 0; c < 3; ++c) {
    for (int i = 0; i < height * width; ++i) {
      ptr[c * height * width + i] = static_cast<float>(input.data[3 * i + c]);
    }
  }

  auto im_info =
      BlobGetMutableTensor(workSpace.GetBlob("im_info"), caffe2::CPU);
  im_info->Resize(batch, 3);
  float* im_info_ptr = im_info->mutable_data<float>();
  im_info_ptr[0] = height;
  im_info_ptr[1] = width;
  im_info_ptr[2] = 1.0;

  // run the network
  CAFFE_ENFORCE(workSpace.RunNet(predictNet_.name()));

  // run 3 more times to benchmark
  int N_benchmark = 3;
  auto start_time = chrono::high_resolution_clock::now();
  for (int i = 0; i < N_benchmark; ++i) {
    CAFFE_ENFORCE(workSpace.RunNet(predictNet_.name()));
  }
  auto end_time = chrono::high_resolution_clock::now();
  auto ms = std::chrono::duration_cast<std::chrono::microseconds>(
                end_time - start_time)
                .count();
  cout << "Latency: " << ms * 1.0 / 1e6 / N_benchmark << " seconds" << endl;

  
  // parse Mask R-CNN outputs
  /*
  auto& bbox = BlobGetTensor(*workSpace.GetBlob("bbox_nms"), caffe2::CPU);
  auto& scores = BlobGetTensor(*workSpace.GetBlob("score_nms"), caffe2::CPU);
  auto& labels = BlobGetTensor(*workSpace.GetBlob("class_nms"), caffe2::CPU);
  auto& kps_score = BlobGetTensor(*workSpace.GetBlob("kps_score"), caffe2::CPU);
  */

  caffe2::Tensor bbox(
      workSpace.GetBlob("bbox_nms")->Get<caffe2::Tensor>(), caffe2::CPU);
  caffe2::Tensor scores(
      workSpace.GetBlob("score_nms")->Get<caffe2::Tensor>(), caffe2::CPU);
  caffe2::Tensor labels(
      workSpace.GetBlob("class_nms")->Get<caffe2::Tensor>(), caffe2::CPU);
  caffe2::Tensor kps_score(
      workSpace.GetBlob("kps_score")->Get<caffe2::Tensor>(), caffe2::CPU);

  cout << "bbox:" << bbox.DebugString() << endl;
  cout << "scores:" << scores.DebugString() << endl;
  cout << "labels:" << labels.DebugString() << endl;
  //(#ROIs, #keypoints, POOL_H, POOL_W)
  cout << "kps_score: " << kps_score.DebugString() << endl;

  //vector<float> kps_vec;

  //const float* kps = kps_score.data<float>() + 0 * kps_score.size_from_dim(1);
  //const float* kps_1 = kps + 0 * kps_score.size_from_dim(2);
  //cout <<"the size is: "<< kps_score.size_from_dim(0) << endl;

  int num_instances = bbox.sizes()[0];
  for (int i = 0; i < num_instances; ++i) {
    float score = scores.data<float>()[i];
    if (score < 0.9)
      continue; // skip them

    const float* box = bbox.data<float>() + i * 4;
    int label = labels.data<float>()[i];

    cout << "Prediction " << i << ", xyxy=(";
    cout << box[0] << ", " << box[1] << ", " << box[2] << ", " << box[3]
         << "); score=" << score << "; label=" << label << endl;

    // 从heatmaps中提取特征点.

    const float* kps = kps_score.data<float>() + i * kps_score.size_from_dim(1);

    float bbx_offset_x = box[0];
    float bbx_offset_y = box[1];

    float bbx_width = (box[2]-box[0])>0?(box[2]-box[0]):1;
    float bbx_heights = (box[3]-box[1])>0?(box[3]-box[1]):1;

    int widths_ceil = ceil(bbx_width);
    int heights_ceil = ceil(bbx_heights);
    //cout<<"widths_ceil size: "<<widths_ceil<<endl;
    //cout<<"heights_ceil size: "<<heights_ceil<<endl;

    int num_keypoints = kps_score.size_from_dim(1)/kps_score.size_from_dim(2);
    //cout << "num_keypoints:  " << num_keypoints << endl;

    float xy_preds[num_keypoints*2] = {0};

    float width_corrections = bbx_width / widths_ceil;
    float height_corrections = bbx_heights / heights_ceil;
    cv::Size dsize = cv::Size(widths_ceil,heights_ceil);

    //双线性插值
    for(int n = 0;n<num_keypoints;++n)
    {
      cv::Mat src_map = cv::Mat::zeros(56,56,CV_32FC1);
      cv::Mat resize_roi_map = cv::Mat::zeros(dsize,CV_32FC1);
      //cout<<"intput size: "<<src_map.cols<<" , "<<src_map.rows<<endl;
      //cout<<"output size: "<<resize_roi_map.cols<<" , "<<resize_roi_map.rows<<endl;

      for(int j = 0;j<src_map.rows;++j)
      {
        for(int k = 0;k<src_map.cols;++k)
        {
          *((float*)(src_map.data+j*src_map.step[0]+k*src_map.step[1])) = kps[n*56*56+j*src_map.cols+k];
        }
      }

      /*
      double maxVal1 = 0; 
      cv::Point maxLoc1;

      cv::minMaxLoc(src_map, NULL, &maxVal1, NULL, &maxLoc1);
      cout << "最大值： " << maxVal1 << endl;
      cout << "最大值位置： " << maxLoc1 << endl;
      */
      cv::resize(src_map, resize_roi_map, dsize, 0, 0);
      //默认双线性插值
      cout<<"output data size :"<<resize_roi_map.size()<<endl;
      double maxVal = 0; 
      cv::Point maxLoc;
      cv::minMaxLoc(resize_roi_map, NULL, &maxVal, NULL, &maxLoc);
      //cout << "插值最大值： " << maxVal << endl;
      //cout << "插值最大值位置： " << maxLoc << endl;

      float x_int = float(maxLoc.x);
      int y_int = maxLoc.y;
      //尽量减小舍入误差
      float x = (float(maxLoc.x) + 0.5) * width_corrections;
      float y = (float(maxLoc.y) + 0.5) * height_corrections;
      cout<<"x: "<<x<<" y: "<<y<<endl;
      xy_preds[n*2] = bbx_offset_x + x ;
      xy_preds[n*2 + 1] = bbx_offset_y + y ;
    }

    for(int i = 0;i<num_keypoints;++i)
    {
      cout<<"pred_x: "<<xy_preds[i*2+0]<<" pred_y: "<<xy_preds[i*2+1]<<endl;
    }
  }
 
  return 0;
}

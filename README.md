# error
python train.py --train_dir=D:/cwge/ObjectDetection_MaskRCNN/CP --pipeline_config_path=D:/cwge/ObjectDetection_MaskRCNN/mask_rcnn_inception_v2_coco.config
2020-09-21 16:20:11.520197: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cudart64_100.dll
WARNING:tensorflow:
The TensorFlow contrib module will not be included in TensorFlow 2.0.
For more information, please see:
  * https://github.com/tensorflow/community/blob/master/rfcs/20180907-contrib-sunset.md
  * https://github.com/tensorflow/addons
  * https://github.com/tensorflow/io (for I/O related ops)
If you depend on functionality not listed there, please file an issue.

C:\ProgramData\Anaconda3\lib\site-packages\dask\dataframe\utils.py:14: FutureWarning: pandas.util.testing is deprecated. Use the functions in the public API at pandas.testing instead.
  import pandas.util.testing as tm
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\nets\inception_resnet_v2.py:373: The name tf.GraphKeys is deprecated. Please use tf.compat.v1.GraphKeys instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\nets\mobilenet\mobilenet.py:389: The name tf.nn.avg_pool is deprecated. Please use tf.nn.avg_pool2d instead.

WARNING:tensorflow:From train.py:55: The name tf.logging.set_verbosity is deprecated. Please use tf.compat.v1.logging.set_verbosity instead.

WARNING:tensorflow:From train.py:55: The name tf.logging.INFO is deprecated. Please use tf.compat.v1.logging.INFO instead.

WARNING:tensorflow:From train.py:184: The name tf.app.run is deprecated. Please use tf.compat.v1.app.run instead.

WARNING:tensorflow:From C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py:251: main (from __main__) is deprecated and will be removed in a future version.
Instructions for updating:
Use object_detection/model_main.py.
W0921 16:20:15.231723 11560 deprecation.py:323] From C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py:251: main (from __main__) is deprecated and will be removed in a future version.
Instructions for updating:
Use object_detection/model_main.py.
WARNING:tensorflow:From train.py:90: The name tf.gfile.MakeDirs is deprecated. Please use tf.io.gfile.makedirs instead.

W0921 16:20:15.233697 11560 module_wrapper.py:139] From train.py:90: The name tf.gfile.MakeDirs is deprecated. Please use tf.io.gfile.makedirs instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\utils\config_util.py:94: The name tf.gfile.GFile is deprecated. Please use tf.io.gfile.GFile instead.

W0921 16:20:15.240692 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\utils\config_util.py:94: The name tf.gfile.GFile is deprecated. Please use tf.io.gfile.GFile instead.

WARNING:tensorflow:From train.py:95: The name tf.gfile.Copy is deprecated. Please use tf.io.gfile.copy instead.

W0921 16:20:15.246722 11560 module_wrapper.py:139] From train.py:95: The name tf.gfile.Copy is deprecated. Please use tf.io.gfile.copy instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\anchor_generators\grid_anchor_generator.py:59: to_float (from tensorflow.python.ops.math_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `tf.cast` instead.
W0921 16:20:15.803604 11560 deprecation.py:323] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\anchor_generators\grid_anchor_generator.py:59: to_float (from tensorflow.python.ops.math_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `tf.cast` instead.
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:265: create_global_step (from tensorflow.contrib.framework.python.ops.variables) is deprecated and will be removed in a future version.
Instructions for updating:
Please switch to tf.train.create_global_step
W0921 16:20:15.817682 11560 deprecation.py:323] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:265: create_global_step (from tensorflow.contrib.framework.python.ops.variables) is deprecated and will be removed in a future version.
Instructions for updating:
Please switch to tf.train.create_global_step
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\data_decoders\tf_example_decoder.py:167: The name tf.FixedLenFeature is deprecated. Please use tf.io.FixedLenFeature instead.

W0921 16:20:15.832676 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\data_decoders\tf_example_decoder.py:167: The name tf.FixedLenFeature is deprecated. Please use tf.io.FixedLenFeature instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\data_decoders\tf_example_decoder.py:182: The name tf.VarLenFeature is deprecated. Please use tf.io.VarLenFeature instead.

W0921 16:20:15.835677 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\data_decoders\tf_example_decoder.py:182: The name tf.VarLenFeature is deprecated. Please use tf.io.VarLenFeature instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:61: The name tf.gfile.Glob is deprecated. Please use tf.io.gfile.glob instead.

W0921 16:20:15.862668 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:61: The name tf.gfile.Glob is deprecated. Please use tf.io.gfile.glob instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:65: The name tf.logging.warning is deprecated. Please use tf.compat.v1.logging.warning instead.

W0921 16:20:15.872664 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:65: The name tf.logging.warning is deprecated. Please use tf.compat.v1.logging.warning instead.

WARNING:tensorflow:num_readers has been reduced to 1 to match input file shards.
W0921 16:20:15.895631 11560 dataset_builder.py:66] num_readers has been reduced to 1 to match input file shards.
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:80: parallel_interleave (from tensorflow.contrib.data.python.ops.interleave_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `tf.data.experimental.parallel_interleave(...)`.
W0921 16:20:15.905657 11560 deprecation.py:323] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:80: parallel_interleave (from tensorflow.contrib.data.python.ops.interleave_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `tf.data.experimental.parallel_interleave(...)`.
WARNING:tensorflow:From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\data\python\ops\interleave_ops.py:77: parallel_interleave (from tensorflow.python.data.experimental.ops.interleave_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `tf.data.Dataset.interleave(map_func, cycle_length, block_length, num_parallel_calls=tf.data.experimental.AUTOTUNE)` instead. If sloppy execution is desired, use `tf.data.Options.experimental_determinstic`.
W0921 16:20:15.912656 11560 deprecation.py:323] From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\data\python\ops\interleave_ops.py:77: parallel_interleave (from tensorflow.python.data.experimental.ops.interleave_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `tf.data.Dataset.interleave(map_func, cycle_length, block_length, num_parallel_calls=tf.data.experimental.AUTOTUNE)` instead. If sloppy execution is desired, use `tf.data.Options.experimental_determinstic`.
2020-09-21 16:20:16.447168: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library nvcuda.dll
2020-09-21 16:20:16.536333: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1618] Found device 0 with properties:
name: GeForce GTX 1080 Ti major: 6 minor: 1 memoryClockRate(GHz): 1.582
pciBusID: 0000:02:00.0
2020-09-21 16:20:16.547791: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1618] Found device 1 with properties:
name: GeForce GTX 1080 Ti major: 6 minor: 1 memoryClockRate(GHz): 1.582
pciBusID: 0000:03:00.0
2020-09-21 16:20:16.564470: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1618] Found device 2 with properties:
name: GeForce GTX 1080 Ti major: 6 minor: 1 memoryClockRate(GHz): 1.582
pciBusID: 0000:82:00.0
2020-09-21 16:20:16.579203: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1618] Found device 3 with properties:
name: GeForce GTX 1080 Ti major: 6 minor: 1 memoryClockRate(GHz): 1.582
pciBusID: 0000:83:00.0
2020-09-21 16:20:16.595618: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cudart64_100.dll
2020-09-21 16:20:16.613920: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cublas64_100.dll
2020-09-21 16:20:16.621992: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cufft64_100.dll
2020-09-21 16:20:16.631781: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library curand64_100.dll
2020-09-21 16:20:16.642636: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cusolver64_100.dll
2020-09-21 16:20:16.651745: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cusparse64_100.dll
2020-09-21 16:20:16.667832: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cudnn64_7.dll
2020-09-21 16:20:16.672992: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1746] Adding visible gpu devices: 0, 1, 2, 3
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\data_decoders\tf_example_decoder.py:462: The name tf.sparse_tensor_to_dense is deprecated. Please use tf.sparse.to_dense instead.

W0921 16:20:16.736418 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\data_decoders\tf_example_decoder.py:462: The name tf.sparse_tensor_to_dense is deprecated. Please use tf.sparse.to_dense instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\data_decoders\tf_example_decoder.py:466: to_int32 (from tensorflow.python.ops.math_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `tf.cast` instead.
W0921 16:20:16.831386 11560 deprecation.py:323] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\data_decoders\tf_example_decoder.py:466: to_int32 (from tensorflow.python.ops.math_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `tf.cast` instead.
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:43: DatasetV1.make_initializable_iterator (from tensorflow.python.data.ops.dataset_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `for ... in dataset:` to iterate over a dataset. If using `tf.estimator`, return the `Dataset` object directly from your input function. As a last resort, you can use `tf.compat.v1.data.make_initializable_iterator(dataset)`.
W0921 16:20:16.921361 11560 deprecation.py:323] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:43: DatasetV1.make_initializable_iterator (from tensorflow.python.data.ops.dataset_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use `for ... in dataset:` to iterate over a dataset. If using `tf.estimator`, return the `Dataset` object directly from your input function. As a last resort, you can use `tf.compat.v1.data.make_initializable_iterator(dataset)`.
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:44: The name tf.add_to_collection is deprecated. Please use tf.compat.v1.add_to_collection instead.

W0921 16:20:16.932355 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\dataset_builder.py:44: The name tf.add_to_collection is deprecated. Please use tf.compat.v1.add_to_collection instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\preprocessor.py:505: The name tf.random_uniform is deprecated. Please use tf.random.uniform instead.

W0921 16:20:16.944351 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\preprocessor.py:505: The name tf.random_uniform is deprecated. Please use tf.random.uniform instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\batcher.py:96: batch (from tensorflow.python.training.input) is deprecated and will be removed in a future version.
Instructions for updating:
Queue-based input pipelines have been replaced by `tf.data`. Use `tf.data.Dataset.batch(batch_size)` (or `padded_batch(...)` if `dynamic_pad=True`).
W0921 16:20:16.997336 11560 deprecation.py:323] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\batcher.py:96: batch (from tensorflow.python.training.input) is deprecated and will be removed in a future version.
Instructions for updating:
Queue-based input pipelines have been replaced by `tf.data`. Use `tf.data.Dataset.batch(batch_size)` (or `padded_batch(...)` if `dynamic_pad=True`).
WARNING:tensorflow:From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\input.py:752: QueueRunner.__init__ (from tensorflow.python.training.queue_runner_impl) is deprecated and will be removed in a future version.
Instructions for updating:
To construct input pipelines, use the `tf.data` module.
W0921 16:20:17.004333 11560 deprecation.py:323] From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\input.py:752: QueueRunner.__init__ (from tensorflow.python.training.queue_runner_impl) is deprecated and will be removed in a future version.
Instructions for updating:
To construct input pipelines, use the `tf.data` module.
WARNING:tensorflow:From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\input.py:752: add_queue_runner (from tensorflow.python.training.queue_runner_impl) is deprecated and will be removed in a future version.
Instructions for updating:
To construct input pipelines, use the `tf.data` module.
W0921 16:20:17.007336 11560 deprecation.py:323] From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\input.py:752: add_queue_runner (from tensorflow.python.training.queue_runner_impl) is deprecated and will be removed in a future version.
Instructions for updating:
To construct input pipelines, use the `tf.data` module.
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\prefetcher.py:51: The name tf.PaddingFIFOQueue is deprecated. Please use tf.queue.PaddingFIFOQueue instead.

W0921 16:20:17.017330 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\prefetcher.py:51: The name tf.PaddingFIFOQueue is deprecated. Please use tf.queue.PaddingFIFOQueue instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\prefetcher.py:58: The name tf.summary.scalar is deprecated. Please use tf.compat.v1.summary.scalar instead.

W0921 16:20:17.032315 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\prefetcher.py:58: The name tf.summary.scalar is deprecated. Please use tf.compat.v1.summary.scalar instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:284: The name tf.get_collection is deprecated. Please use tf.compat.v1.get_collection instead.

W0921 16:20:17.036321 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:284: The name tf.get_collection is deprecated. Please use tf.compat.v1.get_collection instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py:191: The name tf.variable_scope is deprecated. Please use tf.compat.v1.variable_scope instead.

W0921 16:20:17.040320 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py:191: The name tf.variable_scope is deprecated. Please use tf.compat.v1.variable_scope instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py:191: The name tf.get_variable_scope is deprecated. Please use tf.compat.v1.get_variable_scope instead.

W0921 16:20:17.044311 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py:191: The name tf.get_variable_scope is deprecated. Please use tf.compat.v1.get_variable_scope instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\preprocessor.py:2196: The name tf.image.resize_images is deprecated. Please use tf.image.resize instead.

W0921 16:20:17.119294 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\preprocessor.py:2196: The name tf.image.resize_images is deprecated. Please use tf.image.resize instead.

WARNING:tensorflow:From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py:2784: Layer.apply (from tensorflow.python.keras.engine.base_layer) is deprecated and will be removed in a future version.
Instructions for updating:
Please use `layer.__call__` method instead.
W0921 16:20:17.146287 11560 deprecation.py:323] From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py:2784: Layer.apply (from tensorflow.python.keras.engine.base_layer) is deprecated and will be removed in a future version.
Instructions for updating:
Please use `layer.__call__` method instead.
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\anchor_generator.py:149: The name tf.assert_equal is deprecated. Please use tf.compat.v1.assert_equal instead.

W0921 16:20:18.681799 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\anchor_generator.py:149: The name tf.assert_equal is deprecated. Please use tf.compat.v1.assert_equal instead.

INFO:tensorflow:Scale of 0 disables regularizer.
I0921 16:20:18.702797 11560 regularizers.py:98] Scale of 0 disables regularizer.
INFO:tensorflow:Scale of 0 disables regularizer.
I0921 16:20:18.730787 11560 regularizers.py:98] Scale of 0 disables regularizer.
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\predictors\convolutional_box_predictor.py:147: The name tf.logging.info is deprecated. Please use tf.compat.v1.logging.info instead.

W0921 16:20:18.736757 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\predictors\convolutional_box_predictor.py:147: The name tf.logging.info is deprecated. Please use tf.compat.v1.logging.info instead.

INFO:tensorflow:depth of additional conv before box predictor: 0
I0921 16:20:18.738756 11560 convolutional_box_predictor.py:148] depth of additional conv before box predictor: 0
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\box_list_ops.py:169: where (from tensorflow.python.ops.array_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use tf.where in 2.0, which has the same broadcast rule as np.where
W0921 16:20:18.782767 11560 deprecation.py:323] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\box_list_ops.py:169: where (from tensorflow.python.ops.array_ops) is deprecated and will be removed in a future version.
Instructions for updating:
Use tf.where in 2.0, which has the same broadcast rule as np.where
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\box_coders\faster_rcnn_box_coder.py:82: The name tf.log is deprecated. Please use tf.math.log instead.

W0921 16:20:19.395578 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\box_coders\faster_rcnn_box_coder.py:82: The name tf.log is deprecated. Please use tf.math.log instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\minibatch_sampler.py:81: The name tf.random_shuffle is deprecated. Please use tf.random.shuffle instead.

W0921 16:20:19.439560 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\minibatch_sampler.py:81: The name tf.random_shuffle is deprecated. Please use tf.random.shuffle instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\utils\ops.py:1084: calling crop_and_resize_v1 (from tensorflow.python.ops.image_ops_impl) with box_ind is deprecated and will be removed in a future version.
Instructions for updating:
box_ind is deprecated, use box_indices instead
W0921 16:20:19.682455 11560 deprecation.py:506] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\utils\ops.py:1084: calling crop_and_resize_v1 (from tensorflow.python.ops.image_ops_impl) with box_ind is deprecated and will be removed in a future version.
Instructions for updating:
box_ind is deprecated, use box_indices instead
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py:185: The name tf.AUTO_REUSE is deprecated. Please use tf.compat.v1.AUTO_REUSE instead.

W0921 16:20:19.721491 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py:185: The name tf.AUTO_REUSE is deprecated. Please use tf.compat.v1.AUTO_REUSE instead.

WARNING:tensorflow:From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py:1634: flatten (from tensorflow.python.layers.core) is deprecated and will be removed in a future version.
Instructions for updating:
Use keras.layers.flatten instead.
W0921 16:20:20.257361 11560 deprecation.py:323] From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py:1634: flatten (from tensorflow.python.layers.core) is deprecated and will be removed in a future version.
Instructions for updating:
Use keras.layers.flatten instead.
INFO:tensorflow:Scale of 0 disables regularizer.
I0921 16:20:20.263361 11560 regularizers.py:98] Scale of 0 disables regularizer.
INFO:tensorflow:Scale of 0 disables regularizer.
I0921 16:20:20.281353 11560 regularizers.py:98] Scale of 0 disables regularizer.
INFO:tensorflow:Scale of 0 disables regularizer.
I0921 16:20:20.312350 11560 regularizers.py:98] Scale of 0 disables regularizer.
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\predictors\heads\mask_head.py:146: The name tf.image.resize_bilinear is deprecated. Please use tf.compat.v1.image.resize_bilinear instead.

W0921 16:20:20.317345 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\predictors\heads\mask_head.py:146: The name tf.image.resize_bilinear is deprecated. Please use tf.compat.v1.image.resize_bilinear instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\losses.py:174: The name tf.losses.huber_loss is deprecated. Please use tf.compat.v1.losses.huber_loss instead.

W0921 16:20:20.608249 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\losses.py:174: The name tf.losses.huber_loss is deprecated. Please use tf.compat.v1.losses.huber_loss instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\losses.py:180: The name tf.losses.Reduction is deprecated. Please use tf.compat.v1.losses.Reduction instead.

W0921 16:20:20.613252 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\losses.py:180: The name tf.losses.Reduction is deprecated. Please use tf.compat.v1.losses.Reduction instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\losses.py:345: softmax_cross_entropy_with_logits (from tensorflow.python.ops.nn_ops) is deprecated and will be removed in a future version.
Instructions for updating:

Future major versions of TensorFlow will allow gradients to flow
into the labels input on backprop by default.

See `tf.nn.softmax_cross_entropy_with_logits_v2`.

W0921 16:20:20.668231 11560 deprecation.py:323] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\core\losses.py:345: softmax_cross_entropy_with_logits (from tensorflow.python.ops.nn_ops) is deprecated and will be removed in a future version.
Instructions for updating:

Future major versions of TensorFlow will allow gradients to flow
into the labels input on backprop by default.

See `tf.nn.softmax_cross_entropy_with_logits_v2`.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:207: The name tf.losses.add_loss is deprecated. Please use tf.compat.v1.losses.add_loss instead.

W0921 16:20:21.215061 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:207: The name tf.losses.add_loss is deprecated. Please use tf.compat.v1.losses.add_loss instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\optimizer_builder.py:111: The name tf.train.get_or_create_global_step is deprecated. Please use tf.compat.v1.train.get_or_create_global_step instead.

W0921 16:20:21.219056 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\optimizer_builder.py:111: The name tf.train.get_or_create_global_step is deprecated. Please use tf.compat.v1.train.get_or_create_global_step instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\optimizer_builder.py:52: The name tf.train.MomentumOptimizer is deprecated. Please use tf.compat.v1.train.MomentumOptimizer instead.

W0921 16:20:21.238051 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\builders\optimizer_builder.py:52: The name tf.train.MomentumOptimizer is deprecated. Please use tf.compat.v1.train.MomentumOptimizer instead.

C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\indexed_slices.py:424: UserWarning: Converting sparse IndexedSlices to a dense Tensor of unknown shape. This may consume a large amount of memory.
  "Converting sparse IndexedSlices to a dense Tensor of unknown shape. "
C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\indexed_slices.py:424: UserWarning: Converting sparse IndexedSlices to a dense Tensor of unknown shape. This may consume a large amount of memory.
  "Converting sparse IndexedSlices to a dense Tensor of unknown shape. "
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:321: The name tf.check_numerics is deprecated. Please use tf.debugging.check_numerics instead.

W0921 16:20:23.048476 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:321: The name tf.check_numerics is deprecated. Please use tf.debugging.check_numerics instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:352: The name tf.summary.histogram is deprecated. Please use tf.compat.v1.summary.histogram instead.

W0921 16:20:25.889577 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:352: The name tf.summary.histogram is deprecated. Please use tf.compat.v1.summary.histogram instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:354: The name tf.losses.get_losses is deprecated. Please use tf.compat.v1.losses.get_losses instead.

W0921 16:20:26.291536 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:354: The name tf.losses.get_losses is deprecated. Please use tf.compat.v1.losses.get_losses instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:358: The name tf.losses.get_total_loss is deprecated. Please use tf.compat.v1.losses.get_total_loss instead.

W0921 16:20:26.300538 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:358: The name tf.losses.get_total_loss is deprecated. Please use tf.compat.v1.losses.get_total_loss instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:367: The name tf.summary.merge is deprecated. Please use tf.compat.v1.summary.merge instead.

W0921 16:20:26.309530 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:367: The name tf.summary.merge is deprecated. Please use tf.compat.v1.summary.merge instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:370: The name tf.ConfigProto is deprecated. Please use tf.compat.v1.ConfigProto instead.

W0921 16:20:26.320550 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:370: The name tf.ConfigProto is deprecated. Please use tf.compat.v1.ConfigProto instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:375: The name tf.train.Saver is deprecated. Please use tf.compat.v1.train.Saver instead.

W0921 16:20:26.324533 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py:375: The name tf.train.Saver is deprecated. Please use tf.compat.v1.train.Saver instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py:2163: The name tf.global_variables is deprecated. Please use tf.compat.v1.global_variables instead.

W0921 16:20:26.779385 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py:2163: The name tf.global_variables is deprecated. Please use tf.compat.v1.global_variables instead.

WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py:2164: get_or_create_global_step (from tensorflow.contrib.framework.python.ops.variables) is deprecated and will be removed in a future version.
Instructions for updating:
Please switch to tf.train.get_or_create_global_step
W0921 16:20:26.783380 11560 deprecation.py:323] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py:2164: get_or_create_global_step (from tensorflow.contrib.framework.python.ops.variables) is deprecated and will be removed in a future version.
Instructions for updating:
Please switch to tf.train.get_or_create_global_step
WARNING:tensorflow:From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\utils\variables_helper.py:126: The name tf.train.NewCheckpointReader is deprecated. Please use tf.compat.v1.train.NewCheckpointReader instead.

W0921 16:20:26.788381 11560 module_wrapper.py:139] From D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\utils\variables_helper.py:126: The name tf.train.NewCheckpointReader is deprecated. Please use tf.compat.v1.train.NewCheckpointReader instead.

W0921 16:20:26.802376 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_1a_7x7/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.802376 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_1a_7x7/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.803376 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_1a_7x7/depthwise_weights/Momentum] is not available in checkpoint
W0921 16:20:26.804383 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_1a_7x7/pointwise_weights/Momentum] is not available in checkpoint
W0921 16:20:26.807348 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_2b_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.808374 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_2b_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.809377 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_2b_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.809377 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_2c_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.810376 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_2c_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.811347 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Conv2d_2c_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.811347 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.812376 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.820393 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.826367 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.827370 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.828366 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.829366 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.829366 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.830369 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.831391 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_2/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.831391 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_2/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.832367 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_2/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.833365 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_2/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.833365 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_2/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.834367 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_2/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.835368 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_2/Conv2d_0c_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.841364 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_2/Conv2d_0c_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.842370 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_2/Conv2d_0c_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.847367 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_3/Conv2d_0b_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.847367 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_3/Conv2d_0b_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.851365 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3b/Branch_3/Conv2d_0b_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.853334 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.874353 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.876352 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.877327 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.877327 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.878326 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.878326 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.879327 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.879327 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.880355 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_2/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.880355 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_2/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.881380 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_2/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.881380 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_2/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.882351 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_2/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.882351 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_2/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.883352 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_2/Conv2d_0c_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.884350 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_2/Conv2d_0c_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.890347 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_2/Conv2d_0c_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.890347 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_3/Conv2d_0b_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.892323 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_3/Conv2d_0b_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.892323 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_3c/Branch_3/Conv2d_0b_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.893351 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.893351 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.894319 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.894319 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_0/Conv2d_1a_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.895321 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_0/Conv2d_1a_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.895321 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_0/Conv2d_1a_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.896321 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.896321 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.897349 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.897349 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.898318 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.898318 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.899348 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_1/Conv2d_1a_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.903343 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_1/Conv2d_1a_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.904343 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4a/Branch_1/Conv2d_1a_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.905343 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.906344 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.913347 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.915369 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.919346 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.920345 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.921319 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.921319 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.922312 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.923336 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_2/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.923336 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_2/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.924336 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_2/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.927340 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_2/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.928309 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_2/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.929310 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_2/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.929310 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_2/Conv2d_0c_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.930336 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_2/Conv2d_0c_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.930336 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_2/Conv2d_0c_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.930336 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_3/Conv2d_0b_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.931310 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_3/Conv2d_0b_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.931310 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4b/Branch_3/Conv2d_0b_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.932310 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.932310 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.932310 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.933320 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.933320 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.934309 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.934309 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.935333 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.935333 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.935333 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_2/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.944377 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_2/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.944377 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_2/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.949304 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_2/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.950330 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_2/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.951329 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_2/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.952327 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_2/Conv2d_0c_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.955328 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_2/Conv2d_0c_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.956305 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_2/Conv2d_0c_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.957303 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_3/Conv2d_0b_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.958301 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_3/Conv2d_0b_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.958301 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4c/Branch_3/Conv2d_0b_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.958301 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.959335 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.959335 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.960330 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.960330 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.961329 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.961329 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.961329 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.962327 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.966333 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_2/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.966333 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_2/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.975321 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_2/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.977324 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_2/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.980319 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_2/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.981320 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_2/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.982320 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_2/Conv2d_0c_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.982320 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_2/Conv2d_0c_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.983323 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_2/Conv2d_0c_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.983323 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_3/Conv2d_0b_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.984322 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_3/Conv2d_0b_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.984322 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4d/Branch_3/Conv2d_0b_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.985329 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.985329 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.985329 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.986322 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.990317 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.991315 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.992317 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.992317 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.993318 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.993318 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_2/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.993318 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_2/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.994318 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_2/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:26.995318 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_2/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.996316 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_2/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.996316 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_2/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:26.997323 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_2/Conv2d_0c_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:26.997323 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_2/Conv2d_0c_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:26.997323 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_2/Conv2d_0c_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.010285 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_3/Conv2d_0b_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.010285 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_3/Conv2d_0b_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.012318 11560 variables_helper.py:144] Variable [FirstStageFeatureExtractor/InceptionV2/Mixed_4e/Branch_3/Conv2d_0b_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.012318 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.013313 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.013313 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.014311 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_0/Conv2d_1a_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.014311 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_0/Conv2d_1a_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.014311 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_0/Conv2d_1a_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.015309 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.015309 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.016312 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.016312 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.017316 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.017316 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.018311 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_1a_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.022306 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_1a_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.022306 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_1a_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.024306 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.024306 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.025307 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.025307 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.025307 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.026305 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.026305 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.027304 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.027304 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.027304 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_2/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.028305 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_2/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.028305 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_2/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.036301 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_2/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.041299 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_2/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.042304 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_2/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.043302 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_2/Conv2d_0c_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.043302 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_2/Conv2d_0c_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.044304 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_2/Conv2d_0c_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.044304 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_3/Conv2d_0b_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.045302 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_3/Conv2d_0b_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.045302 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5b/Branch_3/Conv2d_0b_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.045302 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_0/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.046309 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_0/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.046309 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_0/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.047337 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_1/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.047337 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_1/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.047337 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_1/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.048302 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_1/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.048302 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_1/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.049302 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_1/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.049302 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_2/Conv2d_0a_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.053296 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_2/Conv2d_0a_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.054298 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_2/Conv2d_0a_1x1/weights/Momentum] is not available in checkpoint
W0921 16:20:27.055299 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_2/Conv2d_0b_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.055299 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_2/Conv2d_0b_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.056296 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_2/Conv2d_0b_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.056296 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_2/Conv2d_0c_3x3/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.057306 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_2/Conv2d_0c_3x3/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.057306 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_2/Conv2d_0c_3x3/weights/Momentum] is not available in checkpoint
W0921 16:20:27.058300 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_3/Conv2d_0b_1x1/BatchNorm/beta/Momentum] is not available in checkpoint
W0921 16:20:27.058300 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_3/Conv2d_0b_1x1/BatchNorm/gamma/Momentum] is not available in checkpoint
W0921 16:20:27.058300 11560 variables_helper.py:144] Variable [SecondStageFeatureExtractor/InceptionV2/Mixed_5c/Branch_3/Conv2d_0b_1x1/weights/Momentum] is not available in checkpoint
WARNING:tensorflow:From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\slim\python\slim\learning.py:742: Supervisor.__init__ (from tensorflow.python.training.supervisor) is deprecated and will be removed in a future version.
Instructions for updating:
Please switch to tf.train.MonitoredTrainingSession
W0921 16:20:27.843050 11560 deprecation.py:323] From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\slim\python\slim\learning.py:742: Supervisor.__init__ (from tensorflow.python.training.supervisor) is deprecated and will be removed in a future version.
Instructions for updating:
Please switch to tf.train.MonitoredTrainingSession
2020-09-21 16:20:28.754975: I tensorflow/core/platform/cpu_feature_guard.cc:142] Your CPU supports instructions that this TensorFlow binary was not compiled to use: AVX2
2020-09-21 16:20:29.561593: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1618] Found device 0 with properties:
name: GeForce GTX 1080 Ti major: 6 minor: 1 memoryClockRate(GHz): 1.582
pciBusID: 0000:02:00.0
2020-09-21 16:20:29.573076: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1618] Found device 1 with properties:
name: GeForce GTX 1080 Ti major: 6 minor: 1 memoryClockRate(GHz): 1.582
pciBusID: 0000:03:00.0
2020-09-21 16:20:29.582165: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1618] Found device 2 with properties:
name: GeForce GTX 1080 Ti major: 6 minor: 1 memoryClockRate(GHz): 1.582
pciBusID: 0000:82:00.0
2020-09-21 16:20:29.590410: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1618] Found device 3 with properties:
name: GeForce GTX 1080 Ti major: 6 minor: 1 memoryClockRate(GHz): 1.582
pciBusID: 0000:83:00.0
2020-09-21 16:20:29.599771: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cudart64_100.dll
2020-09-21 16:20:29.606579: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cublas64_100.dll
2020-09-21 16:20:29.613061: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cufft64_100.dll
2020-09-21 16:20:29.618786: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library curand64_100.dll
2020-09-21 16:20:29.625318: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cusolver64_100.dll
2020-09-21 16:20:29.631706: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cusparse64_100.dll
2020-09-21 16:20:29.639266: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cudnn64_7.dll
2020-09-21 16:20:29.646672: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1746] Adding visible gpu devices: 0, 1, 2, 3
2020-09-21 16:20:31.519406: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1159] Device interconnect StreamExecutor with strength 1 edge matrix:
2020-09-21 16:20:31.526270: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1165]      0 1 2 3
2020-09-21 16:20:31.532316: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1178] 0:   N N N N
2020-09-21 16:20:31.536928: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1178] 1:   N N N N
2020-09-21 16:20:31.543051: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1178] 2:   N N N N
2020-09-21 16:20:31.549598: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1178] 3:   N N N N
2020-09-21 16:20:31.554575: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1304] Created TensorFlow device (/job:localhost/replica:0/task:0/device:GPU:0 with 8784 MB memory) -> physical GPU (device: 0, name: GeForce GTX 1080 Ti, pci bus id: 0000:02:00.0, compute capability: 6.1)
2020-09-21 16:20:31.572094: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1304] Created TensorFlow device (/job:localhost/replica:0/task:0/device:GPU:1 with 8784 MB memory) -> physical GPU (device: 1, name: GeForce GTX 1080 Ti, pci bus id: 0000:03:00.0, compute capability: 6.1)
2020-09-21 16:20:31.587381: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1304] Created TensorFlow device (/job:localhost/replica:0/task:0/device:GPU:2 with 8785 MB memory) -> physical GPU (device: 2, name: GeForce GTX 1080 Ti, pci bus id: 0000:82:00.0, compute capability: 6.1)
2020-09-21 16:20:31.604482: I tensorflow/core/common_runtime/gpu/gpu_device.cc:1304] Created TensorFlow device (/job:localhost/replica:0/task:0/device:GPU:3 with 8784 MB memory) -> physical GPU (device: 3, name: GeForce GTX 1080 Ti, pci bus id: 0000:83:00.0, compute capability: 6.1)
INFO:tensorflow:Restoring parameters from D:/cwge/ObjectDetection_MaskRCNN/CP\model.ckpt-0
I0921 16:20:31.647817 11560 saver.py:1284] Restoring parameters from D:/cwge/ObjectDetection_MaskRCNN/CP\model.ckpt-0
WARNING:tensorflow:From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\saver.py:1069: get_checkpoint_mtimes (from tensorflow.python.training.checkpoint_management) is deprecated and will be removed in a future version.
Instructions for updating:
Use standard file utilities to get mtimes.
W0921 16:20:32.874430 11560 deprecation.py:323] From C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\saver.py:1069: get_checkpoint_mtimes (from tensorflow.python.training.checkpoint_management) is deprecated and will be removed in a future version.
Instructions for updating:
Use standard file utilities to get mtimes.
INFO:tensorflow:Running local_init_op.
I0921 16:20:32.884449 11560 session_manager.py:500] Running local_init_op.
INFO:tensorflow:Done running local_init_op.
I0921 16:20:39.513711 11560 session_manager.py:502] Done running local_init_op.
INFO:tensorflow:Starting Session.
I0921 16:20:46.100876 11560 learning.py:754] Starting Session.
INFO:tensorflow:Saving checkpoint to path D:/cwge/ObjectDetection_MaskRCNN/CP\model.ckpt
I0921 16:20:46.531644 12324 supervisor.py:1117] Saving checkpoint to path D:/cwge/ObjectDetection_MaskRCNN/CP\model.ckpt
INFO:tensorflow:Starting Queues.
I0921 16:20:46.539674 11560 learning.py:768] Starting Queues.
2020-09-21 16:20:48.403714: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cublas64_100.dll
2020-09-21 16:20:48.655308: E tensorflow/stream_executor/cuda/cuda_blas.cc:238] failed to create cublas handle: CUBLAS_STATUS_ALLOC_FAILED
2020-09-21 16:20:48.661654: E tensorflow/stream_executor/cuda/cuda_blas.cc:238] failed to create cublas handle: CUBLAS_STATUS_ALLOC_FAILED
INFO:tensorflow:global_step/sec: 0
I0921 16:20:49.078830 19016 supervisor.py:1099] global_step/sec: 0
2020-09-21 16:20:53.710652: E tensorflow/stream_executor/cuda/cuda_blas.cc:238] failed to create cublas handle: CUBLAS_STATUS_ALLOC_FAILED
2020-09-21 16:20:53.717088: E tensorflow/stream_executor/cuda/cuda_blas.cc:238] failed to create cublas handle: CUBLAS_STATUS_ALLOC_FAILED
2020-09-21 16:20:53.730174: E tensorflow/stream_executor/cuda/cuda_blas.cc:238] failed to create cublas handle: CUBLAS_STATUS_ALLOC_FAILED
2020-09-21 16:20:53.737071: E tensorflow/stream_executor/cuda/cuda_blas.cc:238] failed to create cublas handle: CUBLAS_STATUS_ALLOC_FAILED
2020-09-21 16:20:53.747806: E tensorflow/stream_executor/cuda/cuda_blas.cc:238] failed to create cublas handle: CUBLAS_STATUS_ALLOC_FAILED
2020-09-21 16:20:53.755574: E tensorflow/stream_executor/cuda/cuda_blas.cc:238] failed to create cublas handle: CUBLAS_STATUS_ALLOC_FAILED
2020-09-21 16:20:53.992388: I tensorflow/stream_executor/platform/default/dso_loader.cc:44] Successfully opened dynamic library cudnn64_7.dll
2020-09-21 16:20:56.712743: E tensorflow/stream_executor/cuda/cuda_dnn.cc:329] Could not create cudnn handle: CUDNN_STATUS_ALLOC_FAILED
2020-09-21 16:20:56.722253: E tensorflow/stream_executor/cuda/cuda_dnn.cc:329] Could not create cudnn handle: CUDNN_STATUS_ALLOC_FAILED
2020-09-21 16:20:56.728339: E tensorflow/stream_executor/cuda/cuda_dnn.cc:329] Could not create cudnn handle: CUDNN_STATUS_ALLOC_FAILED
2020-09-21 16:20:56.734970: E tensorflow/stream_executor/cuda/cuda_dnn.cc:329] Could not create cudnn handle: CUDNN_STATUS_ALLOC_FAILED
INFO:tensorflow:Error reported to Coordinator: 2 root error(s) found.
  (0) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
         [[BatchMultiClassNonMaxSuppression/map/while/Exit_6/_89]]
  (1) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
0 successful operations.
0 derived errors ignored.

Original stack trace for 'FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d':
  File "train.py", line 184, in <module>
    tf.app.run()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\platform\app.py", line 40, in run
    _run(main=main, argv=argv, flags_parser=_parse_flags_tolerate_undef)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 300, in run
    _run_main(main, args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 251, in _run_main
    sys.exit(main(argv))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "train.py", line 180, in main
    graph_hook_fn=graph_rewriter_fn)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 290, in train
    clones = model_deploy.create_clones(deploy_config, model_fn, [input_queue])
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py", line 193, in create_clones
    outputs = model_fn(*args, **kwargs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 203, in _create_losses
    prediction_dict = detection_model.predict(images, true_image_shapes)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 647, in predict
    image_shape) = self._extract_rpn_feature_maps(preprocessed_inputs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 978, in _extract_rpn_feature_maps
    scope=self.first_stage_feature_extractor_scope))
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 163, in extract_proposal_features
    return self._extract_proposal_features(preprocessed_inputs, scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\models\faster_rcnn_inception_v2_feature_extractor.py", line 138, in _extract_proposal_features
    scope=scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\nets\inception_v2.py", line 117, in inception_v2_base
    scope=end_point)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\framework\python\ops\arg_scope.py", line 182, in func_with_args
    return func(*args, **current_args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py", line 2784, in separable_convolution2d
    outputs = layer.apply(inputs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 1700, in apply
    return self.__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\layers\base.py", line 548, in __call__
    outputs = super(Layer, self).__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 854, in __call__
    outputs = call_fn(cast_inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 234, in wrapper
    return converted_call(f, options, args, kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 439, in converted_call
    return _call_unconverted(f, args, kwargs, options)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 330, in _call_unconverted
    return f(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\layers\convolutional.py", line 1672, in call
    data_format=conv_utils.convert_data_format(self.data_format, ndim=4))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_impl.py", line 981, in separable_conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_ops.py", line 2010, in conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\gen_nn_ops.py", line 1071, in conv2d
    data_format=data_format, dilations=dilations, name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\op_def_library.py", line 794, in _apply_op_helper
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 507, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3357, in create_op
    attrs, op_def, compute_device)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3426, in _create_op_internal
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 1748, in __init__
    self._traceback = tf_stack.extract_stack()
Traceback (most recent call last):
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1365, in _do_call
    return fn(*args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1350, in _run_fn
    target_list, run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1443, in _call_tf_sessionrun
    run_metadata)
tensorflow.python.framework.errors_impl.UnknownError: 2 root error(s) found.
  (0) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[{{node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d}}]]
         [[BatchMultiClassNonMaxSuppression/map/while/Exit_6/_89]]
  (1) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[{{node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d}}]]
0 successful operations.
0 derived errors ignored.

During handling of the above exception, another exception occurred:

Traceback (most recent call last):
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\coordinator.py", line 297, in stop_on_exception
    yield
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\coordinator.py", line 495, in run
    self.run_loop()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\supervisor.py", line 1045, in run_loop
    [self._sv.summary_op, self._sv.global_step])
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 956, in run
    run_metadata_ptr)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1180, in _run
    feed_dict_tensor, options, run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1359, in _do_run
    run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1384, in _do_call
    raise type(e)(node_def, op, message)
tensorflow.python.framework.errors_impl.UnknownError: 2 root error(s) found.
  (0) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
         [[BatchMultiClassNonMaxSuppression/map/while/Exit_6/_89]]
  (1) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
0 successful operations.
0 derived errors ignored.

Original stack trace for 'FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d':
  File "train.py", line 184, in <module>
    tf.app.run()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\platform\app.py", line 40, in run
    _run(main=main, argv=argv, flags_parser=_parse_flags_tolerate_undef)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 300, in run
    _run_main(main, args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 251, in _run_main
    sys.exit(main(argv))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "train.py", line 180, in main
    graph_hook_fn=graph_rewriter_fn)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 290, in train
    clones = model_deploy.create_clones(deploy_config, model_fn, [input_queue])
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py", line 193, in create_clones
    outputs = model_fn(*args, **kwargs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 203, in _create_losses
    prediction_dict = detection_model.predict(images, true_image_shapes)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 647, in predict
    image_shape) = self._extract_rpn_feature_maps(preprocessed_inputs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 978, in _extract_rpn_feature_maps
    scope=self.first_stage_feature_extractor_scope))
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 163, in extract_proposal_features
    return self._extract_proposal_features(preprocessed_inputs, scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\models\faster_rcnn_inception_v2_feature_extractor.py", line 138, in _extract_proposal_features
    scope=scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\nets\inception_v2.py", line 117, in inception_v2_base
    scope=end_point)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\framework\python\ops\arg_scope.py", line 182, in func_with_args
    return func(*args, **current_args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py", line 2784, in separable_convolution2d
    outputs = layer.apply(inputs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 1700, in apply
    return self.__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\layers\base.py", line 548, in __call__
    outputs = super(Layer, self).__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 854, in __call__
    outputs = call_fn(cast_inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 234, in wrapper
    return converted_call(f, options, args, kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 439, in converted_call
    return _call_unconverted(f, args, kwargs, options)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 330, in _call_unconverted
    return f(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\layers\convolutional.py", line 1672, in call
    data_format=conv_utils.convert_data_format(self.data_format, ndim=4))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_impl.py", line 981, in separable_conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_ops.py", line 2010, in conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\gen_nn_ops.py", line 1071, in conv2d
    data_format=data_format, dilations=dilations, name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\op_def_library.py", line 794, in _apply_op_helper
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 507, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3357, in create_op
    attrs, op_def, compute_device)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3426, in _create_op_internal
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 1748, in __init__
    self._traceback = tf_stack.extract_stack()

I0921 16:20:57.398200 11508 coordinator.py:219] Error reported to Coordinator: 2 root error(s) found.
  (0) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
         [[BatchMultiClassNonMaxSuppression/map/while/Exit_6/_89]]
  (1) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
0 successful operations.
0 derived errors ignored.

Original stack trace for 'FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d':
  File "train.py", line 184, in <module>
    tf.app.run()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\platform\app.py", line 40, in run
    _run(main=main, argv=argv, flags_parser=_parse_flags_tolerate_undef)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 300, in run
    _run_main(main, args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 251, in _run_main
    sys.exit(main(argv))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "train.py", line 180, in main
    graph_hook_fn=graph_rewriter_fn)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 290, in train
    clones = model_deploy.create_clones(deploy_config, model_fn, [input_queue])
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py", line 193, in create_clones
    outputs = model_fn(*args, **kwargs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 203, in _create_losses
    prediction_dict = detection_model.predict(images, true_image_shapes)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 647, in predict
    image_shape) = self._extract_rpn_feature_maps(preprocessed_inputs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 978, in _extract_rpn_feature_maps
    scope=self.first_stage_feature_extractor_scope))
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 163, in extract_proposal_features
    return self._extract_proposal_features(preprocessed_inputs, scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\models\faster_rcnn_inception_v2_feature_extractor.py", line 138, in _extract_proposal_features
    scope=scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\nets\inception_v2.py", line 117, in inception_v2_base
    scope=end_point)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\framework\python\ops\arg_scope.py", line 182, in func_with_args
    return func(*args, **current_args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py", line 2784, in separable_convolution2d
    outputs = layer.apply(inputs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 1700, in apply
    return self.__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\layers\base.py", line 548, in __call__
    outputs = super(Layer, self).__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 854, in __call__
    outputs = call_fn(cast_inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 234, in wrapper
    return converted_call(f, options, args, kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 439, in converted_call
    return _call_unconverted(f, args, kwargs, options)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 330, in _call_unconverted
    return f(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\layers\convolutional.py", line 1672, in call
    data_format=conv_utils.convert_data_format(self.data_format, ndim=4))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_impl.py", line 981, in separable_conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_ops.py", line 2010, in conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\gen_nn_ops.py", line 1071, in conv2d
    data_format=data_format, dilations=dilations, name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\op_def_library.py", line 794, in _apply_op_helper
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 507, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3357, in create_op
    attrs, op_def, compute_device)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3426, in _create_op_internal
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 1748, in __init__
    self._traceback = tf_stack.extract_stack()
Traceback (most recent call last):
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1365, in _do_call
    return fn(*args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1350, in _run_fn
    target_list, run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1443, in _call_tf_sessionrun
    run_metadata)
tensorflow.python.framework.errors_impl.UnknownError: 2 root error(s) found.
  (0) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[{{node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d}}]]
         [[BatchMultiClassNonMaxSuppression/map/while/Exit_6/_89]]
  (1) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[{{node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d}}]]
0 successful operations.
0 derived errors ignored.

During handling of the above exception, another exception occurred:

Traceback (most recent call last):
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\coordinator.py", line 297, in stop_on_exception
    yield
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\coordinator.py", line 495, in run
    self.run_loop()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\supervisor.py", line 1045, in run_loop
    [self._sv.summary_op, self._sv.global_step])
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 956, in run
    run_metadata_ptr)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1180, in _run
    feed_dict_tensor, options, run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1359, in _do_run
    run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1384, in _do_call
    raise type(e)(node_def, op, message)
tensorflow.python.framework.errors_impl.UnknownError: 2 root error(s) found.
  (0) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
         [[BatchMultiClassNonMaxSuppression/map/while/Exit_6/_89]]
  (1) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
0 successful operations.
0 derived errors ignored.

Original stack trace for 'FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d':
  File "train.py", line 184, in <module>
    tf.app.run()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\platform\app.py", line 40, in run
    _run(main=main, argv=argv, flags_parser=_parse_flags_tolerate_undef)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 300, in run
    _run_main(main, args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 251, in _run_main
    sys.exit(main(argv))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "train.py", line 180, in main
    graph_hook_fn=graph_rewriter_fn)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 290, in train
    clones = model_deploy.create_clones(deploy_config, model_fn, [input_queue])
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py", line 193, in create_clones
    outputs = model_fn(*args, **kwargs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 203, in _create_losses
    prediction_dict = detection_model.predict(images, true_image_shapes)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 647, in predict
    image_shape) = self._extract_rpn_feature_maps(preprocessed_inputs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 978, in _extract_rpn_feature_maps
    scope=self.first_stage_feature_extractor_scope))
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 163, in extract_proposal_features
    return self._extract_proposal_features(preprocessed_inputs, scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\models\faster_rcnn_inception_v2_feature_extractor.py", line 138, in _extract_proposal_features
    scope=scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\nets\inception_v2.py", line 117, in inception_v2_base
    scope=end_point)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\framework\python\ops\arg_scope.py", line 182, in func_with_args
    return func(*args, **current_args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py", line 2784, in separable_convolution2d
    outputs = layer.apply(inputs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 1700, in apply
    return self.__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\layers\base.py", line 548, in __call__
    outputs = super(Layer, self).__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 854, in __call__
    outputs = call_fn(cast_inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 234, in wrapper
    return converted_call(f, options, args, kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 439, in converted_call
    return _call_unconverted(f, args, kwargs, options)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 330, in _call_unconverted
    return f(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\layers\convolutional.py", line 1672, in call
    data_format=conv_utils.convert_data_format(self.data_format, ndim=4))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_impl.py", line 981, in separable_conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_ops.py", line 2010, in conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\gen_nn_ops.py", line 1071, in conv2d
    data_format=data_format, dilations=dilations, name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\op_def_library.py", line 794, in _apply_op_helper
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 507, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3357, in create_op
    attrs, op_def, compute_device)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3426, in _create_op_internal
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 1748, in __init__
    self._traceback = tf_stack.extract_stack()

Traceback (most recent call last):
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1365, in _do_call
    return fn(*args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1350, in _run_fn
    target_list, run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1443, in _call_tf_sessionrun
    run_metadata)
tensorflow.python.framework.errors_impl.UnknownError: 2 root error(s) found.
  (0) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[{{node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d}}]]
         [[gradients/SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_0a_1x1/BatchNorm/FusedBatchNormV3_grad/FusedBatchNormGradV3/_2509]]
  (1) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[{{node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d}}]]
0 successful operations.
0 derived errors ignored.

During handling of the above exception, another exception occurred:

Traceback (most recent call last):
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\supervisor.py", line 1004, in managed_session
    yield sess
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\slim\python\slim\learning.py", line 775, in train
    train_step_kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\slim\python\slim\learning.py", line 490, in train_step
    run_metadata=run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 956, in run
    run_metadata_ptr)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1180, in _run
    feed_dict_tensor, options, run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1359, in _do_run
    run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1384, in _do_call
    raise type(e)(node_def, op, message)
tensorflow.python.framework.errors_impl.UnknownError: 2 root error(s) found.
  (0) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
         [[gradients/SecondStageFeatureExtractor/InceptionV2/Mixed_5a/Branch_1/Conv2d_0a_1x1/BatchNorm/FusedBatchNormV3_grad/FusedBatchNormGradV3/_2509]]
  (1) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
0 successful operations.
0 derived errors ignored.

Original stack trace for 'FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d':
  File "train.py", line 184, in <module>
    tf.app.run()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\platform\app.py", line 40, in run
    _run(main=main, argv=argv, flags_parser=_parse_flags_tolerate_undef)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 300, in run
    _run_main(main, args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 251, in _run_main
    sys.exit(main(argv))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "train.py", line 180, in main
    graph_hook_fn=graph_rewriter_fn)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 290, in train
    clones = model_deploy.create_clones(deploy_config, model_fn, [input_queue])
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py", line 193, in create_clones
    outputs = model_fn(*args, **kwargs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 203, in _create_losses
    prediction_dict = detection_model.predict(images, true_image_shapes)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 647, in predict
    image_shape) = self._extract_rpn_feature_maps(preprocessed_inputs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 978, in _extract_rpn_feature_maps
    scope=self.first_stage_feature_extractor_scope))
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 163, in extract_proposal_features
    return self._extract_proposal_features(preprocessed_inputs, scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\models\faster_rcnn_inception_v2_feature_extractor.py", line 138, in _extract_proposal_features
    scope=scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\nets\inception_v2.py", line 117, in inception_v2_base
    scope=end_point)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\framework\python\ops\arg_scope.py", line 182, in func_with_args
    return func(*args, **current_args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py", line 2784, in separable_convolution2d
    outputs = layer.apply(inputs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 1700, in apply
    return self.__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\layers\base.py", line 548, in __call__
    outputs = super(Layer, self).__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 854, in __call__
    outputs = call_fn(cast_inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 234, in wrapper
    return converted_call(f, options, args, kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 439, in converted_call
    return _call_unconverted(f, args, kwargs, options)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 330, in _call_unconverted
    return f(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\layers\convolutional.py", line 1672, in call
    data_format=conv_utils.convert_data_format(self.data_format, ndim=4))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_impl.py", line 981, in separable_conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_ops.py", line 2010, in conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\gen_nn_ops.py", line 1071, in conv2d
    data_format=data_format, dilations=dilations, name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\op_def_library.py", line 794, in _apply_op_helper
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 507, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3357, in create_op
    attrs, op_def, compute_device)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3426, in _create_op_internal
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 1748, in __init__
    self._traceback = tf_stack.extract_stack()


During handling of the above exception, another exception occurred:

Traceback (most recent call last):
  File "train.py", line 184, in <module>
    tf.app.run()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\platform\app.py", line 40, in run
    _run(main=main, argv=argv, flags_parser=_parse_flags_tolerate_undef)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 300, in run
    _run_main(main, args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 251, in _run_main
    sys.exit(main(argv))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "train.py", line 180, in main
    graph_hook_fn=graph_rewriter_fn)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 415, in train
    saver=saver)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\slim\python\slim\learning.py", line 790, in train
    ignore_live_threads=ignore_live_threads)
  File "C:\ProgramData\Anaconda3\lib\contextlib.py", line 99, in __exit__
    self.gen.throw(type, value, traceback)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\supervisor.py", line 1014, in managed_session
    self.stop(close_summary_writer=close_summary_writer)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\supervisor.py", line 839, in stop
    ignore_live_threads=ignore_live_threads)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\coordinator.py", line 389, in join
    six.reraise(*self._exc_info_to_raise)
  File "C:\ProgramData\Anaconda3\lib\site-packages\six.py", line 703, in reraise
    raise value
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\coordinator.py", line 297, in stop_on_exception
    yield
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\coordinator.py", line 495, in run
    self.run_loop()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\training\supervisor.py", line 1045, in run_loop
    [self._sv.summary_op, self._sv.global_step])
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 956, in run
    run_metadata_ptr)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1180, in _run
    feed_dict_tensor, options, run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1359, in _do_run
    run_metadata)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\client\session.py", line 1384, in _do_call
    raise type(e)(node_def, op, message)
tensorflow.python.framework.errors_impl.UnknownError: 2 root error(s) found.
  (0) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
         [[BatchMultiClassNonMaxSuppression/map/while/Exit_6/_89]]
  (1) Unknown: Failed to get convolution algorithm. This is probably because cuDNN failed to initialize, so try looking to see if a warning log message was printed above.
         [[node FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d (defined at C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py:1748) ]]
0 successful operations.
0 derived errors ignored.

Original stack trace for 'FirstStageFeatureExtractor/InceptionV2/InceptionV2/Conv2d_1a_7x7/separable_conv2d':
  File "train.py", line 184, in <module>
    tf.app.run()
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\platform\app.py", line 40, in run
    _run(main=main, argv=argv, flags_parser=_parse_flags_tolerate_undef)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 300, in run
    _run_main(main, args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\absl\app.py", line 251, in _run_main
    sys.exit(main(argv))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "train.py", line 180, in main
    graph_hook_fn=graph_rewriter_fn)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 290, in train
    clones = model_deploy.create_clones(deploy_config, model_fn, [input_queue])
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\deployment\model_deploy.py", line 193, in create_clones
    outputs = model_fn(*args, **kwargs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\legacy\trainer.py", line 203, in _create_losses
    prediction_dict = detection_model.predict(images, true_image_shapes)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 647, in predict
    image_shape) = self._extract_rpn_feature_maps(preprocessed_inputs)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 978, in _extract_rpn_feature_maps
    scope=self.first_stage_feature_extractor_scope))
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\meta_architectures\faster_rcnn_meta_arch.py", line 163, in extract_proposal_features
    return self._extract_proposal_features(preprocessed_inputs, scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\object_detection\models\faster_rcnn_inception_v2_feature_extractor.py", line 138, in _extract_proposal_features
    scope=scope)
  File "D:\cwge\ObjectDetection_MaskRCNN\models\research\slim\nets\inception_v2.py", line 117, in inception_v2_base
    scope=end_point)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\framework\python\ops\arg_scope.py", line 182, in func_with_args
    return func(*args, **current_args)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\contrib\layers\python\layers\layers.py", line 2784, in separable_convolution2d
    outputs = layer.apply(inputs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 324, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 1700, in apply
    return self.__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\layers\base.py", line 548, in __call__
    outputs = super(Layer, self).__call__(inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\engine\base_layer.py", line 854, in __call__
    outputs = call_fn(cast_inputs, *args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 234, in wrapper
    return converted_call(f, options, args, kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 439, in converted_call
    return _call_unconverted(f, args, kwargs, options)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\autograph\impl\api.py", line 330, in _call_unconverted
    return f(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\keras\layers\convolutional.py", line 1672, in call
    data_format=conv_utils.convert_data_format(self.data_format, ndim=4))
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_impl.py", line 981, in separable_conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\nn_ops.py", line 2010, in conv2d
    name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\ops\gen_nn_ops.py", line 1071, in conv2d
    data_format=data_format, dilations=dilations, name=name)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\op_def_library.py", line 794, in _apply_op_helper
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\util\deprecation.py", line 507, in new_func
    return func(*args, **kwargs)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3357, in create_op
    attrs, op_def, compute_device)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 3426, in _create_op_internal
    op_def=op_def)
  File "C:\ProgramData\Anaconda3\lib\site-packages\tensorflow_core\python\framework\ops.py", line 1748, in __init__
    self._traceback = tf_stack.extract_stack()


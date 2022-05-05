

```shell
**********************************************************************
** Visual Studio 2022 Developer Command Prompt v17.1.6
** Copyright (c) 2022 Microsoft Corporation
**********************************************************************
[vcvarsall.bat] Environment initialized for: 'x64'

D:\TBuild>tdesktop\Telegram\build\prepare\win.bat
[1\16](Libraries\patches): SKIPPING
[2\16](ThirdParty\gyp): SKIPPING
[3\16](Libraries\lzma): SKIPPING
[4\16](Libraries\zlib): SKIPPING
[5\16](Libraries\mozjpeg): SKIPPING
[6\16](Libraries\openssl): SKIPPING
[7\16](Libraries\opus): SKIPPING
[8\16](Libraries\rnnoise): SKIPPING
[9\16](Libraries\libvpx): CHANGED, (r)ebuild, rebuild (a)ll, (s)kip, (p)rint, (q)uit?: BUILDING:
---------------------------------COMMANDS-LIST----------------------------------
if exist libvpx rmdir /Q /S libvpx
if exist libvpx exit /b 1
git clone https://github.com/webmproject/libvpx.git
cd libvpx
git checkout v1.11.0
for /r %%i in (..\patches\libvpx\*) do git apply %%i
SET PATH_BACKUP_=%PATH%
SET PATH=%ROOT_DIR%\ThirdParty\msys64\usr\bin;%PATH%
SET CHERE_INVOKING=enabled_from_arguments
SET MSYS2_PATH_TYPE=inherit
if "%X8664%" equ "x64" (
SET "TARGET=x86_64-win64-vs17"
) else (
SET "TARGET=x86-win32-vs17"
)
bash --login ../patches/build_libvpx_win.sh
SET PATH=%PATH_BACKUP_%
--------------------------------------------------------------------------------
Cloning into 'libvpx'...
fatal: unable to access 'https://github.com/webmproject/libvpx.git/': OpenSSL SSL_read: Connection was reset, errno 10054
[9\16](Libraries\libvpx): FAILED
FAILED

D:\TBuild>git config --global http.sslVerify "false"

D:\TBuild>git config --global https.sslVerify "false"

D:\TBuild>tdesktop\Telegram\build\prepare\win.bat
[1\16](Libraries\patches): SKIPPING
[2\16](ThirdParty\gyp): SKIPPING
[3\16](Libraries\lzma): SKIPPING
[4\16](Libraries\zlib): SKIPPING
[5\16](Libraries\mozjpeg): SKIPPING
[6\16](Libraries\openssl): SKIPPING
[7\16](Libraries\opus): SKIPPING
[8\16](Libraries\rnnoise): SKIPPING
[9\16](Libraries\libvpx): NOT FOUND, BUILDING:
---------------------------------COMMANDS-LIST----------------------------------
if exist libvpx rmdir /Q /S libvpx
if exist libvpx exit /b 1
git clone https://github.com/webmproject/libvpx.git
cd libvpx
git checkout v1.11.0
for /r %%i in (..\patches\libvpx\*) do git apply %%i
SET PATH_BACKUP_=%PATH%
SET PATH=%ROOT_DIR%\ThirdParty\msys64\usr\bin;%PATH%
SET CHERE_INVOKING=enabled_from_arguments
SET MSYS2_PATH_TYPE=inherit
if "%X8664%" equ "x64" (
SET "TARGET=x86_64-win64-vs17"
) else (
SET "TARGET=x86-win32-vs17"
)
bash --login ../patches/build_libvpx_win.sh
SET PATH=%PATH_BACKUP_%
--------------------------------------------------------------------------------
Cloning into 'libvpx'...
remote: Enumerating objects: 161918, done.
remote: Counting objects: 100% (39/39), done.
remote: Compressing objects: 100% (26/26), done.
remote: Total 161918 (delta 17), reused 30 (delta 13), pack-reused 161879
Receiving objects: 100% (161918/161918), 69.64 MiB | 103.00 KiB/s, done.
Resolving deltas: 100% (131105/131105), done.
Updating files: 100% (1180/1180), done.
Updating files: 100% (261/261), done.
Note: switching to 'v1.11.0'.

You are in 'detached HEAD' state. You can look around, make experimental
changes and commit them, and you can discard any commits you make in this
state without impacting any branches by switching back to a branch.

If you want to create a new branch to retain commits you create, you may
do so (now or later) by using -c with the switch command. Example:

  git switch -c <new-branch-name>

Or undo this operation with:

  git switch -

Turn off this advice by setting config variable advice.detachedHead to false

HEAD is now at 626ff3595 Update AUTHORS and version info in libs.mk
warning: build/make/gen_msvs_sln.sh has type 100644, expected 100755
warning: build/make/gen_msvs_vcxproj.sh has type 100644, expected 100755
warning: configure has type 100644, expected 100755
warning: build/make/gen_msvs_vcxproj.sh has type 100644, expected 100755
warning: build/make/gen_msvs_vcxproj.sh has type 100644, expected 100755
:: 正在同步软件包数据库...
 mingw32 已经是最新版本
 mingw64                                    1604.5 KiB  50.0 KiB/s 00:32 [#######################################] 100%
 ucrt64                                     1663.1 KiB  31.7 KiB/s 00:52 [#######################################] 100%
 clang64                                    1587.3 KiB   262 KiB/s 00:06 [#######################################] 100%
 msys                                        384.9 KiB  29.9 KiB/s 00:13 [#######################################] 100%
警告：make-4.3-3 已经为最新 -- 重新安装
正在解析依赖关系...
正在查找软件包冲突...

软件包 (1) make-4.3-3

全部安装大小：  1.48 MiB
净更新大小：    0.00 MiB

:: 进行安装吗？ [Y/n]
(1/1) 正在检查密钥环里的密钥                                             [#######################################] 100%
(1/1) 正在检查软件包完整性                                               [#######################################] 100%
(1/1) 正在加载软件包文件                                                 [#######################################] 100%
(1/1) 正在检查文件冲突                                                   [#######################################] 100%
(1/1) 正在检查可用存储空间                                               [#######################################] 100%
:: 正在处理软件包的变化...
(1/1) 正在重新安装 make                                                  [#######################################] 100%
:: 正在运行事务后钩子函数...
(1/1) Updating the info directory file...
警告：diffutils-3.8-3 已经为最新 -- 重新安装
正在解析依赖关系...
正在查找软件包冲突...

软件包 (1) diffutils-3.8-3

全部安装大小：  1.46 MiB
净更新大小：    0.00 MiB

:: 进行安装吗？ [Y/n]
(1/1) 正在检查密钥环里的密钥                                             [#######################################] 100%
(1/1) 正在检查软件包完整性                                               [#######################################] 100%
(1/1) 正在加载软件包文件                                                 [#######################################] 100%
(1/1) 正在检查文件冲突                                                   [#######################################] 100%
(1/1) 正在检查可用存储空间                                               [#######################################] 100%
:: 正在处理软件包的变化...
(1/1) 正在重新安装 diffutils                                             [#######################################] 100%
:: 正在运行事务后钩子函数...
(1/1) Updating the info directory file...
  disabling examples
  disabling unit_tests
  disabling tools
  disabling docs
  enabling static_msvcrt
  enabling vp8
  enabling vp9
  enabling webm_io
Configuring for target 'x86_64-win64-vs17'
  enabling x86_64
  enabling runtime_cpu_detect
  enabling mmx
  enabling sse
  enabling sse2
  enabling sse3
  enabling ssse3
  enabling sse4_1
  enabling avx
  enabling avx2
  enabling avx512
    disabling avx512: not supported by compiler
  using nasm
  disabling ccache
  enabling postproc
  enabling libyuv
Bypassing toolchain for environment detection.
Creating makefiles for x86_64-win64-vs17 libs
Creating makefiles for x86_64-win64-vs17 solution
    [CREATE] vpx.def
    [CREATE] vpx_config.asm
    [CREATE] vpx_scale_rtcd.h
    [CREATE] vpx_dsp_rtcd.h
    [CREATE] vp8_rtcd.h
    [CREATE] vp9_rtcd.h
    [CREATE] vpx.pc
    [CREATE] vpx.vcxproj
    [CREATE] vp9rc.vcxproj
generating filter 'Source Files' from 151 files
generating filter 'Source Files' from 471 files
generating filter 'Header Files' from 78 files
generating filter 'Build Files' from 3 files
generating filter 'References' from 1 files
Ignored files list (1 items) is:
    vp9/common/vp9_rtcd_defs.pl
generating filter 'Header Files' from 227 files
generating filter 'Build Files' from 20 files
generating filter 'References' from 7 files
Ignored files list (7 items) is:
    CHANGELOG
    vpx_scale/vpx_scale_rtcd.pl
    vpx_dsp/vpx_dsp_rtcd_defs.pl
    vp8/common/rtcd_defs.pl
    vp9/common/vp9_rtcd_defs.pl
    build/make/version.sh
    build/make/rtcd.pl
    [CREATE] vpx.sln
/d/TBuild/Libraries/win64/libvpx/build/make/gen_msvs_sln.sh \
             --dep=vp9rc:vpx \
            --dep=test_libvpx:gtest \
            --ver=17\
            --out=vpx.sln vp9rc.vcxproj vpx.vcxproj
msbuild.exe vpx.sln -m -t:Build \
        -p:Configuration="Debug" -p:Platform="x64"
msbuild.exe vpx.sln -m -t:Build \
        -p:Configuration="Release" -p:Platform="x64"
用于 .NET Framework 的 Microsoft (R) 生成引擎版本 17.1.0+ae57d105c
版权所有(C) Microsoft Corporation。保留所有权利。

用于 .NET Framework 的 Microsoft (R) 生成引擎版本 17.1.0+ae57d105c
版权所有(C) Microsoft Corporation。保留所有权利。

生成启动时间为 5/5/2022 下午3:30:56。
生成启动时间为 5/5/2022 下午3:30:56。
     1>     1>项目“D:\TBuild\Libraries\win64\libvpx\vpx.sln”在节点 1 上(Build 个目标)。
项目“D:\TBuild\Libraries\win64\libvpx\vpx.sln”在节点 1 上(Build 个目标)。
     1>     1>ValidateSolutionConfiguration:
         正在生成解决方案配置“Release|x64”。
ValidateSolutionConfiguration:
         正在生成解决方案配置“Debug|x64”。
     1>     1>项目“D:\TBuild\Libraries\win64\libvpx\vpx.sln”(1)正在节点 1 上生成“D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj”(2) (默认
       目标)。
项目“D:\TBuild\Libraries\win64\libvpx\vpx.sln”(1)正在节点 1 上生成“D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj”(2) (默认
       目标)。
     2>     2>PrepareForBuild:
PrepareForBuild:
         正在创建目录“x64\Debug\vp9rc\”。
         正在创建目录“x64\Release\vp9rc\”。
     1>     1>项目“D:\TBuild\Libraries\win64\libvpx\vpx.sln”(1)正在节点 2 上生成“D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj”(3) (默认目标
       )。
项目“D:\TBuild\Libraries\win64\libvpx\vpx.sln”(1)正在节点 2 上生成“D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj”(3) (默认目标
       )。
     3>PrepareForBuild:
     3>         正在创建目录“x64\Debug\vpx\”。
PrepareForBuild:
         正在创建目录“x64\Release\vpx\”。
     2>PrepareForBuild:
     2>         正在创建目录“x64\Release\vp9rc\vp9rc.tlog\”。
PrepareForBuild:
         正在创建目录“x64\Debug\vp9rc\vp9rc.tlog\”。
     3>     3>PrepareForBuild:
         正在创建目录“x64\Debug\vpx\vpx.tlog\”。
PrepareForBuild:
         正在创建目录“x64\Release\vpx\vpx.tlog\”。
     2>InitializeBuildStatus:
         正在创建“x64\Debug\vp9rc\vp9rc.tlog\unsuccessfulbuild”，因为已指定“AlwaysCreate”。
     3>InitializeBuildStatus:
         正在创建“x64\Debug\vpx\vpx.tlog\unsuccessfulbuild”，因为已指定“AlwaysCreate”。
     2>InitializeBuildStatus:
         正在创建“x64\Release\vp9rc\vp9rc.tlog\unsuccessfulbuild”，因为已指定“AlwaysCreate”。
     3>InitializeBuildStatus:
         正在创建“x64\Release\vpx\vpx.tlog\unsuccessfulbuild”，因为已指定“AlwaysCreate”。
       CustomBuild:
         Assembling emms_mmx.asm
       CustomBuild:
         Assembling emms_mmx.asm
     2>     2>CustomBuild:
         Assembling vp9_dct_sse2.asm
CustomBuild:
         Assembling vp9_dct_sse2.asm
     3>CustomBuild:
         Assembling float_control_word.asm
     3>CustomBuild:
         Assembling float_control_word.asm
         Assembling intrapred_sse2.asm
         Assembling intrapred_sse2.asm
     2>CustomBuild:
         Assembling vp9_error_sse2.asm
     2>CustomBuild:
         Assembling vp9_error_sse2.asm
         Assembling vp9_quantize_ssse3_x86_64.asm
         Assembling vp9_quantize_ssse3_x86_64.asm
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(60) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(68) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(69) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(90) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(91) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(108) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(109) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(110) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(111) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(116) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(60) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(122) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(68) : ... from macro `QUANTIZE_
         FP' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(123) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(69) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(140) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(90) : ... from macro `QUANTIZE_
         FP' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(141) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(60) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(91) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(68) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(108) : ... from macro `QUANTIZE
         _FP' defined here
     2>         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(69) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(109) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(82) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(110) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(83) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(111) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(90) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(116) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(91) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(122) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(108) : ... from macro `QUANTIZE
         _FP' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(123) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(109) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(140) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
     2>         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(110) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(141) : ... from macro `QUANTIZE
         _FP' defined here
     2>         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(111) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(60) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(116) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(68) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(122) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(69) : ... from macro `QUANTIZE_
         FP' defined here
     2>         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(123) : ... from macro `QUANTIZE
         _FP' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(82) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
     2>         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(135) : ... from macro `QUANTIZE
         _FP' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(83) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
     2>         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(136) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(90) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(140) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(91) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(141) : ... from macro `QUANTIZE
         _FP' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(108) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(109) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(110) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(111) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(116) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(122) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(123) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(135) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(136) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(140) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(141) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     2>     2>E:\VS\MSBuild\Microsoft\VC\v170\Microsoft.CppCommon.targets(245,5): error MSB8066: “vp9\encoder\x86\vp9_dct_sse2
       .asm;vp9\encoder\x86\vp9_error_sse2.asm;vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm”的自定义生成已退出，代码为 1。 [D:\TBuil
       d\Libraries\win64\libvpx\vp9rc.vcxproj]
E:\VS\MSBuild\Microsoft\VC\v170\Microsoft.CppCommon.targets(245,5): error MSB8066: “vp9\encoder\x86\vp9_dct_sse2
       .asm;vp9\encoder\x86\vp9_error_sse2.asm;vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm”的自定义生成已退出，代码为 1。 [D:\TBuil
       d\Libraries\win64\libvpx\vp9rc.vcxproj]
     2>     2>已完成生成项目“D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj”(默认目标)的操作 - 失败。
已完成生成项目“D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj”(默认目标)的操作 - 失败。
     3>CustomBuild:
         Assembling intrapred_ssse3.asm
     3>CustomBuild:
         Assembling intrapred_ssse3.asm
         Assembling add_noise_sse2.asm
         Assembling deblock_sse2.asm
         Assembling add_noise_sse2.asm
         Assembling vpx_subpixel_8t_sse2.asm
         Assembling deblock_sse2.asm
         Assembling vpx_subpixel_8t_sse2.asm
         Assembling vpx_subpixel_bilinear_sse2.asm
         Assembling vpx_subpixel_bilinear_sse2.asm
         Assembling vpx_subpixel_8t_ssse3.asm
         Assembling vpx_subpixel_8t_ssse3.asm
         Assembling vpx_subpixel_bilinear_ssse3.asm
         Assembling vpx_subpixel_bilinear_ssse3.asm
         Assembling vpx_convolve_copy_sse2.asm
         Assembling vpx_convolve_copy_sse2.asm
         Assembling fwd_txfm_ssse3_x86_64.asm
         Assembling fwd_txfm_ssse3_x86_64.asm
         Assembling inv_wht_sse2.asm
         Assembling inv_wht_sse2.asm
         Assembling avg_ssse3_x86_64.asm
         Assembling avg_ssse3_x86_64.asm
         Assembling sad_sse3.asm
         Assembling sad_sse3.asm
         Assembling sad_ssse3.asm
         Assembling sad_ssse3.asm
         Assembling sad_sse4.asm
         Assembling sad_sse4.asm
         Assembling sad4d_sse2.asm
         Assembling sad4d_sse2.asm
         Assembling sad_sse2.asm
         Assembling sad_sse2.asm
         Assembling subtract_sse2.asm
         Assembling subtract_sse2.asm
         Assembling ssim_opt_x86_64.asm
         Assembling subpel_variance_sse2.asm
         Assembling ssim_opt_x86_64.asm
         Assembling subpel_variance_sse2.asm
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
     3>         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
     3>         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(86) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
     3>         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
     3>         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(275) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
     3>         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(351) : ... from macro `SUBPEL_VARIANCE'
         defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         Assembling dequantize_mmx.asm
         Assembling idctllm_mmx.asm
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(493) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(571) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(674) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(829) : ... from macro `SUBPEL_VARIANCE'
         defined here
         Assembling recon_mmx.asm
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(971) : ... from macro `SUBPEL_VARIANCE'
         defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1173) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of opco
       de and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1440) : ... from macro `SUBPEL_VARIANCE'
          defined here
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(66) : ... from macro `STORE_AND_RET' def
         ined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         Assembling dequantize_mmx.asm
         Assembling idctllm_mmx.asm
         Assembling subpixel_mmx.asm
         Assembling recon_mmx.asm
         Assembling idctllm_sse2.asm
         Assembling subpixel_mmx.asm
         Assembling recon_sse2.asm
         Assembling idctllm_sse2.asm
         Assembling subpixel_sse2.asm
         Assembling recon_sse2.asm
         Assembling loopfilter_sse2.asm
         Assembling subpixel_sse2.asm
         Assembling loopfilter_sse2.asm
         Assembling iwalsh_sse2.asm
         Assembling subpixel_ssse3.asm
         Assembling iwalsh_sse2.asm
         Assembling subpixel_ssse3.asm
         Assembling mfqe_sse2.asm
         Assembling loopfilter_block_sse2_x86_64.asm
         Assembling mfqe_sse2.asm
         Assembling copy_sse2.asm
         Assembling loopfilter_block_sse2_x86_64.asm
         Assembling copy_sse3.asm
         Assembling dct_sse2.asm
         Assembling copy_sse2.asm
         Assembling copy_sse3.asm
         Assembling fwalsh_sse2.asm
         Assembling dct_sse2.asm
         Assembling block_error_sse2.asm
         Assembling fwalsh_sse2.asm
         Assembling temporal_filter_apply_sse2.asm
         Assembling block_error_sse2.asm
         Assembling temporal_filter_apply_sse2.asm
         Assembling vp9_dct_sse2.asm
         Assembling vp9_dct_sse2.asm
         Assembling vp9_error_sse2.asm
         Assembling vp9_error_sse2.asm
         Assembling vp9_quantize_ssse3_x86_64.asm
         Assembling vp9_quantize_ssse3_x86_64.asm
     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(60) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(60) : ... from macro `QUANTIZE_
         FP' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(68) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(68) : ... from macro `QUANTIZE_
         FP' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(69) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(90) : ... from macro `QUANTIZE_
         FP' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(69) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(90) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(91) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(91) : ... from macro `QUANTIZE_
         FP' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(108) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(108) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(109) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(109) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(110) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(110) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(111) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(111) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(116) : ... from macro `QUANTIZE
         _FP' defined here
     3>         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(116) : ... from macro `QUANTIZE
         _FP' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(122) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(122) : ... from macro `QUANTIZE
         _FP' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(123) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(123) : ... from macro `QUANTIZE
         _FP' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(140) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(140) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(141) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(141) : ... from macro `QUANTIZE
         _FP' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(60) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(60) : ... from macro `QUANTIZE_
         FP' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(68) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
     3>         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(68) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(69) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
     3>         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(69) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(82) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
     3>         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(82) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(83) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(83) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(90) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(90) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(91) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(91) : ... from macro `QUANTIZE_
         FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(108) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(108) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(109) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(109) : ... from macro `QUANTIZE
         _FP' defined here
     3>         third_party/x86inc/x86inc.asm(1466) : ... from macro `pcmpgtw' defined here
         third_party/x86inc/x86inc.asm(1431) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(110) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(110) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(111) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(111) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pmovmskb' defined here
     3>         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(116) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(116) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(122) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(122) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(123) : ... from macro `QUANTIZE
         _FP' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(123) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
     3>         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(135) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(135) : ... from macro `QUANTIZE
         _FP' defined here
     3>         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(136) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(136) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `psignw' defined here
         third_party/x86inc/x86inc.asm(1447) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(140) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
     3>         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(140) : ... from macro `QUANTIZE
         _FP' defined here
         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(141) : ... from macro `QUANTIZE
         _FP' defined here
     3>         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
     3>D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combination
        of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(141) : ... from macro `QUANTIZE
         _FP' defined here
E:\VS\MSBuild\Microsoft\VC\v170\Microsoft.CppCommon.targets(245,5): error MSB8066: “vpx_ports\emms_mmx.asm;vpx_p
       orts\float_control_word.asm;vpx_dsp\x86\intrapred_sse2.asm;vpx_dsp\x86\intrapred_ssse3.asm;vpx_dsp\x86\add_noise
       _sse2.asm;vpx_         third_party/x86inc/x86inc.asm(1464) : ... from macro `pcmpeqw' defined here
dsp\x86\deblock_sse2.asm;vpx_dsp\x86\vpx_subpixel_8t_sse2.asm;vpx_dsp\x86\vpx_subpixel_bilinear_ss
       e2.asm;vpx_dsp\x86\vpx_subpixel_8t_ssse3.asm;vpx_dsp\x86\vpx_subpixel_bilinear_ssse3.asm;vpx_dsp\x86\vpx_convolv
       e_copy_sse2.asm;vpx_dsp\x86\         third_party/x86inc/x86inc.asm(1445) : ... from macro `RUN_AVX_INSTR' defined here
fwd_txfm_ssse3_x86_64.asm;vpx_dsp\x86\inv_wht_sse2.asm;vpx_dsp\x86\avg_ssse3_x86_64.
       asm;vpx_dsp\x86\sad_sse3.asm;vpx_dsp\x86\sad_ssse3.asm;vpx_dsp\x86\sad_sse4.asm;vpx_dsp\x86\sad4d_sse2.asm;vpx_d
       sp\x86\sad_sse2.asm;vpx_dsp\x86\subtract_sse2.asm;vpx_dsp\x86\ssim_opt_x86_64.asm;vpx_dsp\x86\subpel_variance_ss
       e2.asm;vp8\common\x86\dequantize_mmx.asm;vp8\common\x86\idctllm_mmx.asm;vp8\common\x86\recon_mmx.asm;vp8\common\
       x86\subpixel_mmx.asm;vp8\common\x86\idctllm_sse2.asm;vp8\common\x86\recon_sse2.asm;vp8\common\x86\subpixel_sse2.
       asm;vp8\common\x86\loopfilter_sse2.asm;vp8\common\x86\iwalsh_sse2.asm;vp8\common\x86\subpixel_ssse3.asm;vp8\comm
       on\x86\mfqe_sse2.asm;vp8\common\x86\loopfilter_block_sse2_x86_64.asm;vp8\encoder\x86\copy_sse2.asm;vp8\encoder\x
       86\copy_sse3.asm;vp8\encoder\x86\dct_sse2.asm;vp8\encoder\x86\fwalsh_sse2.asm;vp8\encoder\x86\block_error_sse2.a
       sm;vp8\encoder\x86\temporal_filter_apply_sse2.asm;vp9\encoder\x86\vp9_dct_sse2.asm;v     3>p9\encoder\x86\vp9_error_sse
       2.asm;vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm”的自定义生成已退出，代码为 1。 [D:\TBuild\Libraries\win64\libvpx\vpx.vcxpr
       oj]
E:\VS\MSBuild\Microsoft\VC\v170\Microsoft.CppCommon.targets(245,5): error MSB8066: “vpx_ports\emms_mmx.asm;vpx_p
       orts\float_control_word.asm;vpx_dsp\x86\intrapred_sse2.asm;vpx_dsp\x86\intrapred_ssse3.asm;vpx_dsp\x86\add_noise
       _sse2.asm;vpx_dsp\x86\deblock_sse2.asm;vpx_dsp\x86\vpx_subpixel_8t_sse2.asm;vpx_dsp\x86\vpx_subpixel_bilinear_ss
       e2.asm;vpx_dsp\x86\vpx_subpixel_8t_ssse3.asm;vpx_dsp\x86\vpx_subpixel_bilinear_ssse3.asm;vpx_dsp\x86\vpx_convolv
       e_copy_sse2.asm;vpx_dsp\x86\fwd_txfm_ssse3_x86_64.asm;vpx_dsp\x86\inv_wht_sse2.asm;vpx_dsp\x86\avg_ssse3_x86_64.
       asm;vpx_dsp\x86\sad_sse3.asm;vpx_dsp\x86\sad_ssse3.asm;vpx_dsp\x86\sad_sse4.asm;vpx_dsp\x86\sad4d_sse2.asm;vpx_d
       sp\x86\sad_sse2.asm;vpx_dsp\x86\subtract_s     3>se2.asm;vpx_dsp\x86\ssim_opt_x86_64.asm;vpx_dsp\x86\subpel_variance_ss
       e2.asm;vp8\common\x86\dequantize_mmx.asm;vp8\common\x86\idctllm_mmx.asm;vp8\common\x86\recon_mmx.asm;vp8\common\
       x86\subpixel_mmx.asm;vp8\common\x86\idctllm_sse2.asm;vp8\common\x86\recon_sse2.asm;vp8\common\x86\subpixel_sse2.
       asm;vp8\common\x86\loopfilter_sse2.asm;vp8\common\x86\iwalsh_sse2.asm;vp8\common\x86\subpixel_ssse3.asm;vp8\comm
       on\x86\mfqe_sse2.asm;vp8\common\x86\loopfilter_block_sse2_x86_64.asm;vp8\encoder\x86\copy_sse2.asm;vp8\encoder\x
       86\copy_sse3.asm;vp8\encoder\x86\dct_sse2.asm;vp8\encoder\x86\fwalsh_sse2.asm;vp8\encoder\x86\block_error_sse2.a
       sm;vp8\encoder\x86\temporal_filter_apply_sse2.asm;vp9\encoder\x86\vp9_dct_sse2.asm;vp9\encoder\x86\vp9_error_sse
       2.asm;vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm”的自定义生成已退出，代码为 1。 [D:\TBuild\Libraries\win64\libvpx\vpx.vcxpr
       oj]
已完成生成项目“D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj”(默认目标)的操作 - 失败。
     3>     1>已完成生成项目“D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj”(默认目标)的操作 - 失败。
已完成生成项目“D:\TBuild\Libraries\win64\libvpx\vpx.sln”(Build 个目标)的操作 - 失败。
     1>已完成生成项目“D:\TBuild\Libraries\win64\libvpx\vpx.sln”(Build 个目标)的操作 - 失败。


生成失败。
生成失败。


       “D:\TBuild\Libraries\win64\libvpx\vpx.sln”(Build 目标) (1) ->
       “D:\TBuild\Libraries\win64\libvpx\vpx.sln”(Build 目标) (1) ->
       “D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj”(默认目标) (2) ->
       “D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj”(默认目标) (2) ->
       (CustomBuild 目标) ->
       (CustomBuild 目标) ->
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vp9rc.vcxproj]
         E:\VS\MSBuild\Microsoft\VC\v170\Microsoft.CppCommon.targets(245,5): error MSB8066: “vp9\encoder\x86\vp9_dct_ss
       e2.asm;vp9\encoder\x86\vp9_error_sse2.asm;vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm”的自定义生成已退出，代码为 1。 [D:\TBu
       ild\Libraries\win64\libvpx\vp9rc.vcxproj]


         E:\VS\MSBuild\Microsoft\VC\v170\Microsoft.CppCommon.targets(245,5): error MSB8066: “vp9\encoder\x86\vp9_dct_ss
       e2.asm;vp9\encoder\x86\vp9_error_sse2.asm;vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm”的自定义生成已退出，代码为 1。 [D:\TBu
       ild\Lib       “D:\TBuild\Libraries\win64\libvpx\vpx.sln”(Build 目标) (1) ->
raries\win64\libvpx\vp9rc.vcxproj]
       “D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj”(默认目标) (3) ->

         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]

         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
       “D:\TBuild\Libraries\win64\libvpx\vpx.sln”(Build 目标) (1) ->
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
       “D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj”(默认目标) (3) ->
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1450): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1451): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1452): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1455): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1456): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1457): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1460): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1461): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1462): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1465): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1466): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vpx_dsp\x86\subpel_variance_sse2.asm(1467): error : invalid combination of op
       code and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(177): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         E:\VS\MSBuild\Microsoft\VC\v170\Microsoft.CppCommon.targets(245,5): error MSB8066: “vpx_ports\emms_mmx.asm;vpx
       _ports\float_control_word.asm;vpx_dsp\x86\intrapred_sse2.asm;vpx_dsp\x86\intrapred_ssse3.asm;vpx_dsp\x86\add_noi
       se_sse2.asm;vpx_dsp\x86\deblock_sse2.asm;vpx_dsp\x86\vpx_subpixel_8t_sse2.asm;vpx_dsp\x86\vpx_subpixel_bilinear_
       sse2.asm;vpx_dsp\x86\vpx_subpixel_8t_ssse3.asm;vpx_dsp\x86\vpx_subpixel_bilinear_ssse3.asm;vpx_dsp\x86\vpx_convo
       lve_copy_sse2.asm;vpx_dsp\x86\fwd_txfm_ssse3_x86_64.asm;vpx_dsp\x86\inv_wht_sse2.asm;vpx_dsp\x86\avg_ssse3_x86_6
       4.asm;vpx_dsp\x86\sad_sse3.asm;vpx_dsp\x86\sad_ssse3.asm;vpx_dsp\x86\sad_sse4.asm;vpx_dsp\x86\sad4d_sse2.asm;vpx
       _dsp\x86\sad_sse2.asm;vpx_dsp\x86\subtract_sse2.asm;vpx_dsp\x86\ssim_opt_x86_64.asm;vpx_dsp\x86\subpel_variance_
       sse2.asm;vp8\common\x86\dequantize_mmx.asm;vp8\common\x86\idctllm_mmx.asm;vp8\common\x86\recon_mmx.asm;vp8\commo
       n\x86\subpixel_mmx.asm;vp8\common\x86\idctllm_sse2.asm;vp8\common\x86\recon_sse2.asm;vp8\common\x86\subpixel_sse
       2.asm;vp8\common\x86\loopfilter_sse2.asm;vp8\common\x86\iwalsh_sse2.asm;vp8\common\x86\subpixel_ssse3.asm;vp8\co
       mmon\x86\mfqe_sse2.asm;vp8\common\x86\loopfilter_block_sse2_x86_64.asm;vp8\encoder\x86\copy_sse2.asm;vp8\encoder
       \x86\copy_sse3.asm;vp8\encoder\x86\dct_sse2.asm;vp8\encoder\x86\fwalsh_sse2.asm;vp8\encoder\x86\block_error_sse2
       .asm;vp8\encoder\x86\temporal_filter_apply_sse2.asm;vp9\encoder\x86\vp9_dct_s         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
se2.asm;vp9\encoder\x86\vp9_error_s
       se2.asm;vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm”的自定义生成已退出，代码为 1。 [D:\TBuild\Libraries\win64\libvpx\vpx.vcx
       proj]

         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         D:\TBuild\Libraries\win64\libvpx\vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm(178): error : invalid combinati
       on of opcode and operands [D:\TBuild\Libraries\win64\libvpx\vpx.vcxproj]
         E:\VS\MSBuild\Microsoft\VC\v170\Microsoft.CppCommon.targets(245,5): error MSB8066: “vpx_ports\emms_mmx.asm;vpx
       _ports\float_control_word.asm;vpx_dsp\x86\intrapred_sse2.asm;vpx_dsp\x86\intrapred_ssse3.asm;vpx_dsp\x86\add_noi
       se_sse2    0 个警告
.asm;vpx_dsp\x86\deblock_sse2.asm;vpx_dsp\x86\vpx_subpixel_8t_sse2.asm;vpx_dsp\x86\vpx_subpixel_bilinear_
       sse2.asm;vpx_dsp\x86\vpx_subpixel_8t_ssse3.asm;vpx_dsp\x86\vpx_subpixel_bilinear_ssse3.asm;vpx_dsp\x86\vpx_convo
       lve_copy_sse2.asm;vpx_dsp\x86\fwd_txfm_ssse3_x86_64.asm;vpx_dsp\x86\inv_wht_sse2.asm;vpx_dsp\x86\avg_ssse3_x86_6
       4.asm;vpx_dsp\x86\sad_sse3.asm;vpx_dsp\x86\sad_ssse3.asm;vpx_dsp\x86\sad_sse4.asm;vpx_dsp\x86\sad4d_sse2.asm;vpx
       _dsp\x86\sad_sse2.asm;vpx_dsp\x86\subtract_sse2.asm;vpx_dsp\x86\ssim_opt_x86_64.asm;vpx_dsp\x86\subpel_variance_
       sse2.asm;vp8\common\x86\dequantize_mmx.asm;vp8\common\x86\idctllm_mmx.asm;vp8\common\x86\recon_mmx.asm;vp8\commo
       n\x86\subpixel_mmx.asm;vp8\common\x86\idctllm_sse2.asm;vp8\common\x86\recon_sse2.asm;vp8\common\x86\subpixel_sse
       2.asm;vp8\common\x86\loopfilter_sse2.asm;vp8\common\x86\iwalsh_sse2.asm;vp8\common\x86\subpixel_ssse3.asm;vp8\co
       mmon\x86\mfqe_sse2.asm;vp8\common\x86\loopfilter_block_sse2_x86_64.asm;vp8\encoder\x86\copy_sse2.asm;vp8\encoder
       \x86\copy_sse3.asm;vp8\encoder\x86\dct_sse2.asm;vp8\encoder\x86\fwalsh_sse2.asm;vp8\encoder\x86\block_error_sse2
       .asm;vp8\encoder\x86\temporal_filter_apply_sse2.asm;vp9\encoder\x86\vp9_dct_s    174 个错误
se2.asm;vp9\encoder\x86\vp9_error_s
       se2.asm;vp9\encoder\x86\vp9_quantize_ssse3_x86_64.asm”的自定义生成已退出，代码为 1。 [D:\TBuild\Libraries\win64\libvpx\vpx.vcx
       proj]


已用时间 00:00:14.73
    0 个警告
    174 个错误

已用时间 00:00:14.73
make[1]: *** [vpx.sln.mk:21：Debug_x64] 错误 1
make[1]: *** 正在等待未完成的任务....
make[1]: *** [vpx.sln.mk:35：Release_x64] 错误 1
make: *** [Makefile:17：.DEFAULT] 错误 2
[9\16](Libraries\libvpx): FAILED
FAILED

D:\TBuild>
```


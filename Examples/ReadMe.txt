Aspose.TeX for C++ Readme File
=================================
Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.
=================================

Files and Directory Introduction
--------------------------------

Suffix _vc14x64 in file names means that library requires Microsoft Visual Studio 2017 for x64 platform.
Suffix _vc14x86 in file names means that library requires Microsoft Visual Studio 2017 for x86 platform.

1. `example` - Demo Visual Studio project on how to use Aspose.TeX for C++
2. `data`    - Files for demo project
3. `license` - Aspose end user license agreement and 3rd-party license documents
4. `include` - Aspose.TeX for C++ header files
5. `lib`     - Aspose.TeX for C++ runtime library
6. aspose.tex.cpp.targets - Aspose.TeX for C++ configuration file
7. CodePorting.Native.Cs2Cpp.API.targets - CodePorting.Native.Cs2Cpp configuration file.

How to use
--------------------------------

Aspose.TeX for C++ library depends on CodePorting.Native.Cs2Cpp library.
Correspondent version of CodePorting.Native.Cs2Cpp library is attached.
Unzip CodePorting.Native.Cs2Cpp_vc14_*.zip file.
Import aspose.tex.cpp.targets and CodePorting.Native.Cs2Cpp.API.targets into your project like in HelloWorld.vcxproj:

<Import Project="..\aspose.tex.cpp.targets" />
<Import Project="..\CodePorting.Native.Cs2Cpp_vc14_21.2\CodePorting.Native.Cs2Cpp.API.targets" />

How to build and run examples
--------------------------------

You can use Visual Studio 2017 solution `example\HelloWorld.sln`

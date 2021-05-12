#pragma once

#include <system/string.h>

namespace Aspose {

namespace TeX {

namespace Examples {

namespace CPP {

class RunExamples : public System::Object
{
    typedef RunExamples ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String BasePath;
    static System::String InputDirectory;
    static System::String OutputDirectory;

    static void Main();

private:

    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace CPP
} // namespace Examples
} // namespace TeX
} // namespace Aspose



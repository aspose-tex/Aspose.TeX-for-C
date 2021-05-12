#include "stdafx.h"
#include "LoadLicenseFromStream.h"

#include <system/string.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/console.h>
#include <Aspose.TeX.Cpp/License.h>

namespace Aspose {

namespace TeX {

namespace Examples {

namespace CPP {

namespace TeXTypesetting {

RTTI_INFO_IMPL_HASH(3915964578u, ::Aspose::TeX::Examples::CPP::TeXTypesetting::LoadLicenseFromStream, ThisTypeBaseTypesInfo);

void LoadLicenseFromStream::Run()
{
    // ExStart:LoadLicenseFromStream
    // Initialize license object
    System::SharedPtr<License> license = System::MakeObject<License>();
    // Load license in FileStream
    System::SharedPtr<System::IO::FileStream> myStream = System::MakeObject<System::IO::FileStream>(u"License\\Aspose.Total.C++.lic", System::IO::FileMode::Open);
    // Set license
    license->SetLicense(myStream);
    System::Console::WriteLine(u"License set successfully.");
    // ExEnd:LoadLicenseFromStream
}

} // namespace TeXTypesetting
} // namespace CPP
} // namespace Examples
} // namespace TeX
} // namespace Aspose

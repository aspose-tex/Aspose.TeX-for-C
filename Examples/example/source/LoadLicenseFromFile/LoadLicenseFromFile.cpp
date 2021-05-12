#include "stdafx.h"
#include "LoadLicenseFromFile.h"

#include <system/string.h>
#include <system/console.h>
#include <Aspose.TeX.Cpp/License.h>

namespace Aspose {

namespace TeX {

namespace Examples {

namespace CPP {

namespace TeXTypesetting {

RTTI_INFO_IMPL_HASH(1161743774u, ::Aspose::TeX::Examples::CPP::TeXTypesetting::LoadLicenseFromFile, ThisTypeBaseTypesInfo);

void LoadLicenseFromFile::Run()
{
    // ExStart:LoadLicenseFromFile
    // Initialize license object
    System::SharedPtr<License> license = System::MakeObject<License>();
    // Set license
    license->SetLicense(u"License\\Aspose.Total.C++.lic");
    System::Console::WriteLine(u"License set successfully.");
    // ExEnd:LoadLicenseFromFile
}

} // namespace TeXTypesetting
} // namespace CPP
} // namespace Examples
} // namespace TeX
} // namespace Aspose

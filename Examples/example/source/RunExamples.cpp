#include "stdafx.h"
#include "RunExamples.h"

#include <system/io/path.h>
#include <system/io/directory.h>
#include <system/console.h>
#include <Aspose.TeX.Cpp/License.h>

#include "ZipFileInputOuputAndPdfOutput/ZipFileInputOuputAndPdfOutput.h"
#include "TypesetXpsWrittenToExternalStream/TypesetXpsWrittenToExternalStream.h"
#include "TypesetWithCustomTeXFormat/TypesetWithCustomTeXFormat.h"
#include "TypesetPdfWrittenToExternalStream/TypesetPdfWrittenToExternalStream.h"
#include "StreamInputImageOutputAndTerminalInput/StreamInputImageOutputAndTerminalInput.h"
#include "OverridenJobNameAndTerminalOutputWrittenToZip/OverridenJobNameAndTerminalOutputWrittenToZip.h"
#include "OverridenJobNameAndTerminalOutputWrittenToDisk/OverridenJobNameAndTerminalOutputWrittenToDisk.h"
#include "LoadLicenseFromStream/LoadLicenseFromStream.h"
#include "LoadLicenseFromFile/LoadLicenseFromFile.h"
#include "FileSystemInputOutputAndXpsOutput/FileSystemInputOutputAndXpsOutput.h"
#include "CustomTeXFormatFileCreation/CustomTeXFormatFileCreation.h"


using namespace Aspose::TeX;
using namespace Aspose::TeX::Examples::CPP::TeXTypesetting;
namespace Aspose {

namespace TeX {

namespace Examples {

namespace CPP {

RTTI_INFO_IMPL_HASH(5435424u, ::Aspose::TeX::Examples::CPP::RunExamples, ThisTypeBaseTypesInfo);

System::String RunExamples::BasePath;
System::String RunExamples::InputDirectory;
System::String RunExamples::OutputDirectory;

RunExamples::__StaticConstructor__ RunExamples::s_constructor__;

void RunExamples::Main()
{
    System::Console::WriteLine(u"Open RunExamples.cs. \nIn Main() method uncomment the example that you want to run.");
    System::Console::WriteLine(u"=====================================================");
    
    /// / Instantiate an instance of license and set the license file through its path
    //System::MakeObject<License>()->SetLicense(System::IO::Path::GetFullPath(System::IO::Path::Combine(BasePath, u"License\\Aspose.TeX.CPP.lic")));
    
    // Uncomment the example that you want to run.
    
    /// / =====================================================
    /// / =====================================================
    /// /  Typeset a TeX file 
    /// / =====================================================
    /// / =====================================================
    
    //TeXTypesetting::LoadLicenseFromFile::Run();
    
    //TeXTypesetting::LoadLicenseFromStream::Run();
    
    //TeXTypesetting::FileSystemInputOutputAndXpsOutput::Run();
    
    //TeXTypesetting::OverridenJobNameAndTerminalOutputWrittenToDisk::Run();
    
    //TeXTypesetting::TypesetXpsWrittenToExternalStream::Run();
    
    //TeXTypesetting::ZipFileInputOuputAndPdfOutput::Run();
    
    //TeXTypesetting::OverridenJobNameAndTerminalOutputWrittenToZip::Run();
    
    //TeXTypesetting::TypesetPdfWrittenToExternalStream::Run();
    
    //TeXTypesetting::CustomTeXFormatFileCreation::Run();
    
    //TeXTypesetting::TypesetWithCustomTeXFormat::Run();
}

RunExamples::__StaticConstructor__::__StaticConstructor__()
{
    BasePath = System::IO::Directory::GetCurrentDirectory();
    InputDirectory = System::IO::Path::GetFullPath(System::IO::Path::Combine(RunExamples::BasePath, u"input"));
    OutputDirectory = System::IO::Path::GetFullPath(System::IO::Path::Combine(RunExamples::BasePath, u"output"));
}

} // namespace CPP
} // namespace Examples
} // namespace TeX
} // namespace Aspose

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    Aspose::TeX::Examples::CPP::RunExamples::Main();
    return 0;
}

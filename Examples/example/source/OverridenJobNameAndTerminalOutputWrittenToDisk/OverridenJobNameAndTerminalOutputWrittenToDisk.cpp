#include "stdafx.h"
#include "OverridenJobNameAndTerminalOutputWrittenToDisk.h"

#include <system/string.h>
#include <Aspose.TeX.Cpp/TeXOptions.h>
#include <Aspose.TeX.Cpp/TeXConfig.h>
#include <Aspose.TeX.Cpp/TeX.h>
#include <Aspose.TeX.Cpp/Presentation/Xps/XpsDevice.h>
#include <Aspose.TeX.Cpp/IO/OutputFileTerminal.h>
#include <Aspose.TeX.Cpp/IO/OutputFileSystemDirectory.h>
#include <Aspose.TeX.Cpp/IO/IWorkingDirectory.h>
#include <Aspose.TeX.Cpp/IO/IOutputTerminal.h>
#include <Aspose.TeX.Cpp/IO/InputFileSystemDirectory.h>

#include "RunExamples.h"


using namespace Aspose::TeX::IO;
using namespace Aspose::TeX::Presentation::Xps;
namespace Aspose {

namespace TeX {

namespace Examples {

namespace CPP {

namespace TeXTypesetting {

RTTI_INFO_IMPL_HASH(1325883620u, ::Aspose::TeX::Examples::CPP::TeXTypesetting::OverridenJobNameAndTerminalOutputWrittenToDisk, ThisTypeBaseTypesInfo);

void OverridenJobNameAndTerminalOutputWrittenToDisk::Run()
{
    // ExStart:OverrideJobName-WriteTerminalOutputToFileSystem
    // Create typesetting options for default ObjectTeX format on ObjectTeX engine extension.
    System::SharedPtr<TeXOptions> options = TeXOptions::ConsoleAppOptions(TeXConfig::ObjectTeX());
    // Specify the job name. Otherwise, TeX.Typeset()'s method first argument will be taken as a job name.
    options->set_JobName(u"overriden-job-name");
    // Specify a file system working directory for input.
    options->set_InputWorkingDirectory(System::MakeObject<InputFileSystemDirectory>(RunExamples::InputDirectory));
    // Specify a file system working directory for output.
    options->set_OutputWorkingDirectory(System::MakeObject<OutputFileSystemDirectory>(RunExamples::OutputDirectory));
    // Specify that the terminal output must be written to a file in the output working directory.
    // The file name is <job_name>.trm.
    options->set_TerminalOut(System::MakeObject<OutputFileTerminal>(options->get_OutputWorkingDirectory()));
    
    // Run typesetting.
    Aspose::TeX::TeX::Typeset(u"hello-world", System::MakeObject<XpsDevice>(), options);
    // ExEnd:OverrideJobName-WriteTerminalOutputToFileSystem
}

} // namespace TeXTypesetting
} // namespace CPP
} // namespace Examples
} // namespace TeX
} // namespace Aspose

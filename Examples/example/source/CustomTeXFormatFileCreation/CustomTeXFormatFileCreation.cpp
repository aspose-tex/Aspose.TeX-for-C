#include "stdafx.h"
#include "CustomTeXFormatFileCreation.h"

#include <system/string.h>
#include <system/io/text_writer.h>
#include <Aspose.TeX.Cpp/TeXOptions.h>
#include <Aspose.TeX.Cpp/TeXConfig.h>
#include <Aspose.TeX.Cpp/TeX.h>
#include <Aspose.TeX.Cpp/IO/OutputFileSystemDirectory.h>
#include <Aspose.TeX.Cpp/IO/IWorkingDirectory.h>
#include <Aspose.TeX.Cpp/IO/IOutputTerminal.h>
#include <Aspose.TeX.Cpp/IO/InputFileSystemDirectory.h>

#include "RunExamples.h"


using namespace Aspose::TeX::IO;
namespace Aspose {

namespace TeX {

namespace Examples {

namespace CPP {

namespace TeXTypesetting {

RTTI_INFO_IMPL_HASH(133236421u, ::Aspose::TeX::Examples::CPP::TeXTypesetting::CustomTeXFormatFileCreation, ThisTypeBaseTypesInfo);

void CustomTeXFormatFileCreation::Run()
{
    // ExStart:CreateCustomTeXFormatFile
    // Create typesetting options for no format on ObjectTeX engine extension.
    System::SharedPtr<TeXOptions> options = TeXOptions::ConsoleAppOptions(TeXConfig::get_ObjectIniTeX());
    // Specify a file system working directory for input.
    options->set_InputWorkingDirectory(System::MakeObject<InputFileSystemDirectory>(RunExamples::InputDirectory));
    // Specify a file system working directory for output.
    options->set_OutputWorkingDirectory(System::MakeObject<OutputFileSystemDirectory>(RunExamples::OutputDirectory));
    
    // Run format creation.
    Aspose::TeX::TeX::CreateFormat(u"customtex", options);
    
    // For further output to look write.
    options->get_TerminalOut()->get_Writer()->WriteLine();
    // ExEnd:CreateCustomTeXFormatFile
}

} // namespace TeXTypesetting
} // namespace CPP
} // namespace Examples
} // namespace TeX
} // namespace Aspose

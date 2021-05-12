#include "stdafx.h"
#include "FileSystemInputOutputAndXpsOutput.h"

#include <system/string.h>
#include <system/io/text_writer.h>
#include <Aspose.TeX.Cpp/TeXOptions.h>
#include <Aspose.TeX.Cpp/TeXConfig.h>
#include <Aspose.TeX.Cpp/TeX.h>
#include <Aspose.TeX.Cpp/Presentation/Xps/XpsDevice.h>
#include <Aspose.TeX.Cpp/IO/OutputFileSystemDirectory.h>
#include <Aspose.TeX.Cpp/IO/OutputConsoleTerminal.h>
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

RTTI_INFO_IMPL_HASH(1608458850u, ::Aspose::TeX::Examples::CPP::TeXTypesetting::FileSystemInputOutputAndXpsOutput, ThisTypeBaseTypesInfo);

void FileSystemInputOutputAndXpsOutput::Run()
{
    // ExStart:TakeInputFromFileSystem-WriteOutputToFileSystem-WriteTerminalOutputToConsole
    // Create typesetting options for default ObjectTeX format on ObjectTeX engine extension.
    System::SharedPtr<TeXOptions> options = TeXOptions::ConsoleAppOptions(TeXConfig::ObjectTeX());
    // Specify a file system working directory for input.
    options->set_InputWorkingDirectory(System::MakeObject<InputFileSystemDirectory>(RunExamples::InputDirectory));
    // Specify a file system working directory for output.
    options->set_OutputWorkingDirectory(System::MakeObject<OutputFileSystemDirectory>(RunExamples::OutputDirectory));
    // Specify console as output terminal.
    options->set_TerminalOut(System::MakeObject<OutputConsoleTerminal>());
    // Default. No need to specify.
    // Specify memory stream as output terminal, if you don't terminal output to be written to console.
    //options.TerminalOut = new OutputMemoryTerminal();
    // Run typesetting.
    Aspose::TeX::TeX::Typeset(u"hello-world", System::MakeObject<XpsDevice>(), options);
    
    // For further output to look write.
    options->get_TerminalOut()->get_Writer()->WriteLine();
    // The same as Console.Out.WriteLine();
    // ExEnd:TakeInputFromFileSystem-WriteOutputToFileSystem-WriteTerminalOutputToConsole
}

} // namespace TeXTypesetting
} // namespace CPP
} // namespace Examples
} // namespace TeX
} // namespace Aspose

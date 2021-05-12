/// <summary>
/// Taking TeX input from a stream, using file system directory for output, outputting to image device,
/// writing terminal output to console, taking online input from console.
/// </summary>
#include "stdafx.h"
#include "StreamInputImageOutputAndTerminalInput.h"

#include <system/text/encoding.h>
#include <system/io/text_writer.h>
#include <system/io/memory_stream.h>
#include <system/array.h>
#include <Aspose.TeX.Cpp/TeXOptions.h>
#include <Aspose.TeX.Cpp/TeXConfig.h>
#include <Aspose.TeX.Cpp/TeX.h>
#include <Aspose.TeX.Cpp/Presentation/SaveOptions.h>
#include <Aspose.TeX.Cpp/Presentation/Image/PngSaveOptions.h>
#include <Aspose.TeX.Cpp/Presentation/Image/ImageDevice.h>
#include <Aspose.TeX.Cpp/IO/OutputFileSystemDirectory.h>
#include <Aspose.TeX.Cpp/IO/OutputConsoleTerminal.h>
#include <Aspose.TeX.Cpp/IO/IWorkingDirectory.h>
#include <Aspose.TeX.Cpp/IO/IOutputTerminal.h>
#include <Aspose.TeX.Cpp/IO/InputFileSystemDirectory.h>
#include <Aspose.TeX.Cpp/IO/InputConsoleTerminal.h>
#include <Aspose.TeX.Cpp/IO/IInputTerminal.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::TeX::IO;
using namespace Aspose::TeX::Presentation::Image;
namespace Aspose {

namespace TeX {

namespace Examples {

namespace CPP {

namespace TeXTypesetting {

RTTI_INFO_IMPL_HASH(2420388652u, ::Aspose::TeX::Examples::CPP::TeXTypesetting::StreamInputImageOutputAndTerminalInput, ThisTypeBaseTypesInfo);

void StreamInputImageOutputAndTerminalInput::Run()
{
    // ExStart:TakeMainInputFromStream-AuxFromFileSystem-TakeTerminalInputFromConsole-AlternativeImagesStorage
    // Create typesetting options for default ObjectTeX format on ObjectTeX engine extension.
    System::SharedPtr<TeXOptions> options = TeXOptions::ConsoleAppOptions(TeXConfig::ObjectTeX());
    // Specify the job name.
    options->set_JobName(u"stream-in-image-out");
    // Specify a file system working directory for input.
    options->set_InputWorkingDirectory(System::MakeObject<InputFileSystemDirectory>(RunExamples::InputDirectory));
    // Specify a file system working directory for output.
    options->set_OutputWorkingDirectory(System::MakeObject<OutputFileSystemDirectory>(RunExamples::OutputDirectory));
    // Specify console as input terminal.
    options->set_TerminalIn(System::MakeObject<InputConsoleTerminal>());
    // Default. No need to specify.
    // Specify console as output terminal.
    options->set_TerminalOut(System::MakeObject<OutputConsoleTerminal>());
    // Default. No need to specify.
    
    // Create and specify saving options.
    options->set_SaveOptions([&]{ auto tmp_0 = System::MakeObject<PngSaveOptions>(); tmp_0->set_Resolution(300); return tmp_0; }());
    // Create image device.
    System::SharedPtr<ImageDevice> device = System::MakeObject<ImageDevice>();
    // Run typesetting.
    Aspose::TeX::TeX::Typeset(System::MakeObject<System::IO::MemoryStream>(System::Text::Encoding::get_ASCII()->GetBytes(u"\\hrule height 10pt width 95pt\\vskip10pt\\hrule height 5pt")), device, options);
    
    // When console prompts the input, type "ABC", press Enter, then type "\end" and press Enter again.
    
    // For further output to look write. 
    options->get_TerminalOut()->get_Writer()->WriteLine();
    
    // You can alternatively get images in form of array of byte arrays.
    // The first index for the page number (0-based, of course).
    System::ArrayPtr<System::ArrayPtr<uint8_t>> result = device->get_Result();
    // ExEnd:TakeMainInputFromStream-AuxFromFileSystem-TakeTerminalInputFromConsole-AlternativeImagesStorage
}

} // namespace TeXTypesetting
} // namespace CPP
} // namespace Examples
} // namespace TeX
} // namespace Aspose

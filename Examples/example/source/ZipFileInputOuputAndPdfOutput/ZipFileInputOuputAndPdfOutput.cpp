﻿#include "stdafx.h"
#include "ZipFileInputOuputAndPdfOutput.h"

#include <system/string.h>
#include <system/io/text_writer.h>
#include <system/io/stream.h>
#include <system/io/path.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file.h>
#include <system/exceptions.h>
#include <system/details/dispose_guard.h>
#include <Aspose.TeX.Cpp/TeXOptions.h>
#include <Aspose.TeX.Cpp/TeXConfig.h>
#include <Aspose.TeX.Cpp/TeX.h>
#include <Aspose.TeX.Cpp/Presentation/SaveOptions.h>
#include <Aspose.TeX.Cpp/Presentation/Pdf/PdfSaveOptions.h>
#include <Aspose.TeX.Cpp/Presentation/Pdf/PdfDevice.h>
#include <Aspose.TeX.Cpp/IO/OutputZipDirectory.h>
#include <Aspose.TeX.Cpp/IO/OutputConsoleTerminal.h>
#include <Aspose.TeX.Cpp/IO/IWorkingDirectory.h>
#include <Aspose.TeX.Cpp/IO/IOutputTerminal.h>
#include <Aspose.TeX.Cpp/IO/InputZipDirectory.h>

#include "RunExamples.h"


using namespace Aspose::TeX::IO;
using namespace Aspose::TeX::Presentation::Pdf;
namespace Aspose {

namespace TeX {

namespace Examples {

namespace CPP {

namespace TeXTypesetting {

RTTI_INFO_IMPL_HASH(695480821u, ::Aspose::TeX::Examples::CPP::TeXTypesetting::ZipFileInputOuputAndPdfOutput, ThisTypeBaseTypesInfo);

// Using statement is translated using System::Details::DisposeGuard class which may store exception and then throw from destructor.
// We block the warnings related as these are false alarms (the exception, if caught, will be re-thrown from the destructor).
#if defined(__MSVC__)
#pragma warning( push )
#pragma warning(disable : 4715)
#pragma warning(disable : 4700)
#pragma warning(disable : 4701)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
#endif
void ZipFileInputOuputAndPdfOutput::Run()
{
    // ExStart:TakeInputFromZip-WriteOutputToZip
    // Open a stream on a ZIP archive that will serve as the input working directory.
    {
        System::SharedPtr<System::IO::Stream> inZipStream = System::IO::File::Open(System::IO::Path::Combine(RunExamples::InputDirectory, u"zip-in.zip"), System::IO::FileMode::Open);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_1({ inZipStream});
        // ------------------------------------------
        
        try{
            System::SharedPtr<System::IO::Stream> outZipStream = System::IO::File::Open(System::IO::Path::Combine(RunExamples::OutputDirectory, u"zip-pdf-out.zip"), System::IO::FileMode::Create);
            // Clearing resources under 'using' statement
            System::Details::DisposeGuard<1> __dispose_guard_0({ outZipStream});
            // ------------------------------------------
            
            try
            {
                // Create typesetting options for default ObjectTeX format on ObjectTeX engine extension.
                System::SharedPtr<TeXOptions> options = TeXOptions::ConsoleAppOptions(TeXConfig::ObjectTeX());
                // Specify a ZIP archive working directory for input.
                options->set_InputWorkingDirectory(System::MakeObject<InputZipDirectory>(inZipStream, u"in"));
                // Specify a ZIP archive working directory for output.
                options->set_OutputWorkingDirectory(System::MakeObject<OutputZipDirectory>(outZipStream));
                // Specify console as output terminal.
                options->set_TerminalOut(System::MakeObject<OutputConsoleTerminal>());
                // Default. Not necessary to specify.
                
                // Create and specify saving options.
                options->set_SaveOptions(System::MakeObject<PdfSaveOptions>());
                // Run typesetting.
                Aspose::TeX::TeX::Typeset(u"hello-world", System::MakeObject<PdfDevice>(), options);
                
                // For consequent output to look write. 
                options->get_TerminalOut()->get_Writer()->WriteLine();
                
                // Finalize output ZIP archive.
                (System::DynamicCast<Aspose::TeX::IO::OutputZipDirectory>(options->get_OutputWorkingDirectory()))->Finish();
            }
            catch(...)
            {
                __dispose_guard_0.SetCurrentException(std::current_exception());
            }
        }
        catch(...)
        {
            __dispose_guard_1.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:TakeInputFromZip-WriteOutputToZip
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace TeXTypesetting
} // namespace CPP
} // namespace Examples
} // namespace TeX
} // namespace Aspose

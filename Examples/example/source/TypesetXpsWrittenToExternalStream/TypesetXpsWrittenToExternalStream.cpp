#include "stdafx.h"
#include "TypesetXpsWrittenToExternalStream.h"

#include <system/string.h>
#include <system/io/stream.h>
#include <system/io/path.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/io/file.h>
#include <system/details/dispose_guard.h>
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

RTTI_INFO_IMPL_HASH(735650695u, ::Aspose::TeX::Examples::CPP::TeXTypesetting::TypesetXpsWrittenToExternalStream, ThisTypeBaseTypesInfo);

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
void TypesetXpsWrittenToExternalStream::Run()
{
    // ExStart:WriteOutputXpsToExternalStream
    // Create typesetting options for default ObjectTeX format on ObjectTeX engine extension.
    System::SharedPtr<TeXOptions> options = TeXOptions::ConsoleAppOptions(TeXConfig::ObjectTeX());
    // Specify a job name.
    options->set_JobName(u"external-file-stream");
    // Specify a file system working directory for input.
    options->set_InputWorkingDirectory(System::MakeObject<InputFileSystemDirectory>(RunExamples::InputDirectory));
    // Specify a file system working directory for output.
    options->set_OutputWorkingDirectory(System::MakeObject<OutputFileSystemDirectory>(RunExamples::OutputDirectory));
    // Specify that the terminal output must be written to a file in the output working directory.
    // The file name is <job_name>.trm.
    options->set_TerminalOut(System::MakeObject<OutputFileTerminal>(options->get_OutputWorkingDirectory()));
    
    // Open a stream to write typeset XPS document. File name not necessarily the same as the job name.
    {
        System::SharedPtr<System::IO::Stream> stream = System::IO::File::Open(System::IO::Path::Combine(RunExamples::OutputDirectory, options->get_JobName() + u".xps"), System::IO::FileMode::Create);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ stream});
        // ------------------------------------------
        
        try
        {
            Aspose::TeX::TeX::Typeset(u"hello-world", System::MakeObject<XpsDevice>(stream), options);
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:WriteOutputXpsToExternalStream
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

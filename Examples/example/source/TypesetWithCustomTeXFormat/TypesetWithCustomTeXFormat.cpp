#include "stdafx.h"
#include "TypesetWithCustomTeXFormat.h"

#include <system/text/encoding.h>
#include <system/io/text_writer.h>
#include <system/io/memory_stream.h>
#include <system/details/dispose_guard.h>
#include <system/array.h>
#include <Aspose.TeX.Cpp/TeXOptions.h>
#include <Aspose.TeX.Cpp/TeXConfig.h>
#include <Aspose.TeX.Cpp/TeX.h>
#include <Aspose.TeX.Cpp/ResourceProviders/FormatProvider.h>
#include <Aspose.TeX.Cpp/Presentation/Xps/XpsDevice.h>
#include <Aspose.TeX.Cpp/IO/OutputFileSystemDirectory.h>
#include <Aspose.TeX.Cpp/IO/IWorkingDirectory.h>
#include <Aspose.TeX.Cpp/IO/IOutputTerminal.h>
#include <Aspose.TeX.Cpp/IO/InputFileSystemDirectory.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::TeX::IO;
using namespace Aspose::TeX::Presentation::Xps;
using namespace Aspose::TeX::ResourceProviders;
namespace Aspose {

namespace TeX {

namespace Examples {

namespace CPP {

namespace TeXTypesetting {

RTTI_INFO_IMPL_HASH(2539051554u, ::Aspose::TeX::Examples::CPP::TeXTypesetting::TypesetWithCustomTeXFormat, ThisTypeBaseTypesInfo);

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
void TypesetWithCustomTeXFormat::Run()
{
    // ExStart:TypesetWithCustomTeXFormat
    // Create a file system input working directory.
    System::SharedPtr<IWorkingDirectory> wd = System::MakeObject<InputFileSystemDirectory>(RunExamples::OutputDirectory);
    // Create a format provider.
    {
        System::SharedPtr<FormatProvider> formatProvider = System::MakeObject<FormatProvider>(wd, u"customtex");
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ formatProvider});
        // ------------------------------------------
        
        try
        {
            // Create typesetting options for a custom format on ObjectTeX engine extension.
            System::SharedPtr<TeXOptions> options = TeXOptions::ConsoleAppOptions(TeXConfig::ObjectTeX(formatProvider));
            options->set_JobName(u"typeset-with-custom-format");
            // Specify the input working directory.
            options->set_InputWorkingDirectory(wd);
            // Specify a file system working directory for output.
            options->set_OutputWorkingDirectory(System::MakeObject<OutputFileSystemDirectory>(RunExamples::OutputDirectory));
            
            // Run typesetting.
            Aspose::TeX::TeX::Typeset(System::MakeObject<System::IO::MemoryStream>(System::Text::Encoding::get_ASCII()->GetBytes(u"Congratulations! You have successfully typeset this text with your own TeX format!\\end")), System::MakeObject<XpsDevice>(), options);
            
            // For further output to look write.
            options->get_TerminalOut()->get_Writer()->WriteLine();
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:TypesetWithCustomTeXFormat
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

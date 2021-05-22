# C++ API to TypeSet TeX Files

[![Nuget](https://img.shields.io/nuget/v/Aspose.TeX.Cpp)](https://www.nuget.org/packages/Aspose.TeX.Cpp/) ![Nuget](https://img.shields.io/nuget/dt/Aspose.TeX.Cpp?label=nuget%20downloads)

[Home](https://www.aspose.com/) | [Product Page](https://products.aspose.com/tex/cpp) | [Docs](https://docs.aspose.com/tex/cpp/) | [Demos](https://products.aspose.app/tex/family) | [API Reference](https://apireference.aspose.com/tex/cpp) | [Examples](https://github.com/aspose-tex/Aspose.tex-for-C) | [Blog](https://blog.aspose.com/category/tex/) | [Free Support](https://forum.aspose.com/c/tex) | [Temporary License](https://purchase.aspose.com/temporary-license)

[Aspose.TeX for C++](https://products.aspose.com/tex/cpp) is a library that provides a TeX engine extension called ObjectTeX. It can be used to typeset documents described by TeX files. “Object” means that intermediary typesetting result is a specific object model which then can be uniformly converted into a number of end formats.

<p align="center">
<a title="Download complete Aspose.Tex for C++ source code" href="https://github.com/aspose-tex/Aspose.Tex-for-C/archive/master.zip">
	<img src="https://raw.github.com/AsposeExamples/java-examples-dashboard/master/images/downloadZip-Button-Large.png" />
  </a>
</p>

Directory | Description
--------- | -----------
[Examples ](Examples ) | A collection of C++ examples that help you learn the product features.

## TypeSetting File Processing Features

- Typesetting of TeX files
- Create custom TeX formats
- Provide input data in various ways
- Fetch output data in various ways

## Supported Input Formats

TeX

## Save TeX As

XPS, PDF, JPEG, PNG, TIFF, and BMP

## Supported Embedded Fonts for Typesetting

cmbsy10, cmbx10, cmbx5, cmbx6, cmbx7, cmbx8, cmbx9, cmcsc10, cmdunh10, cmex10, cmmi10, cmmi5, cmmi6, cmm7, cmmi8, cmmi9, cmmib10, cmr10, cmr5, cmr6, cmr7, cmr8, cmr9, cmsl10, cmsl8, cmsl9, cmsltt10, cmss10, cmssbx10, cmssi10, cmssq8, cmssqi8, cmsy10, cmsy5, cmsy6, cmsy7, cmsy8, cmsy9, cmti10, cmti7, cmti8, cmti9, cmtt10, cmtt8, cmtt9, cmu10

## Supported Platforms

- Microsoft Windows desktop 32-bit (7, 8, 10)
- Server operating systems (2008, 2012), etc.
- Linux systems (Ubuntu-16.04 or later)
- Microsoft Visual Studio 2015 or later

## Use C++ to Read a `TeX` file and Convert to `XPS`

You can execute the below code snippet to see how Aspose.TeX API performs against your own samples or check the [GitHub Repository](https://github.com/aspose-tex/Aspose.TeX-for-C/tree/master/Examples) for other common usage scenarios.

```c++
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
```

[Home](https://www.aspose.com/) | [Product Page](https://products.aspose.com/tex/cpp) | [Docs](https://docs.aspose.com/tex/cpp/) | [Demos](https://products.aspose.app/tex/family) | [API Reference](https://apireference.aspose.com/tex/cpp) | [Examples](https://github.com/aspose-tex/Aspose.tex-for-C) | [Blog](https://blog.aspose.com/category/tex/) | [Free Support](https://forum.aspose.com/c/tex) | [Temporary License](https://purchase.aspose.com/temporary-license)

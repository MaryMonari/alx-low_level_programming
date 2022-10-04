About Libraries.
A library is a collection of implementations of behavior, written in terms of a language, that has a well-defined interface by which the behavior is invoked.
Libraries save on development timne and have portable functions that could be implemented in any environment that runs the program developed. 
Static libraries
They are a collection of object files that are joined to a source code before it is compiled by a static linker, making it completely self-sufficient. 
Dynamic Libraries
A shared library/ Dynamic Library is a library that is loaded dynamically at runtime for eachapplication that requires it. Dynamic Linking doesn’t require the code to be copied, it is done by just placing name of the library in the binary file. The actual linking happens when the program is run, when both the binary file and the library are in memory. They have the .so extension. 

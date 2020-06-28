
# Creating a playground project

> *2020-06-28*
>
> See files contained in ~/Projects/CppPlayground/cpp_playground/

This toy project is in fact a sandbox to test some concepts, language features and even maybe some library stuff as well.
Since it's not clearly defined which dependences will appear we must be as flexible as possible.

To achieve this flexibility I'm going to use a funky setup:

- Each study will be a unit test file or group of files
- The project will be configured and built by CMake
- CTest will be optional
- Conan will be used to manage dependences such as Catch2, the testing framework choosen for this playground.



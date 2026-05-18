# Toolchain

The first professional habit is making code build the same way every time.
This repository uses CMake because it can describe many examples and projects
without depending on one IDE.

## Key Ideas

- A compiler translates C++ source files into machine code.
- CMake generates build files for tools such as Ninja, Make, or Visual Studio.
- CI runs the same build commands automatically on GitHub.
- Warnings should be treated as feedback, not noise.

## Example

- `hello_modern_cpp.cpp`: first small executable using standard library types.

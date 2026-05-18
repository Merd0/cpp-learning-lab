# Repository Roadmap

The repository is organized as a compact handbook. Each topic has a README for
the mental model and one focused example that compiles in CI.

## Stable Foundation

- Toolchain and CMake.
- Basic types and initialization.
- Functions, references, and const-correctness.
- OOP, invariants, polymorphism, and virtual destructors.
- RAII, smart pointers, and move semantics.
- STL containers and algorithms.
- Templates and generic code.
- Error handling, file I/O, low-level C++, and concurrency.

## Project Layer

The `bank_account_oop` project is intentionally small but production-shaped:

- public header in `include/`
- implementation in `src/`
- demo executable in `src/main.cpp`
- assert-based tests in `tests/`
- CMake integration

Future projects should follow this structure instead of becoming single-file
scripts.

## Done Criteria For New Topics

- The topic has a README.
- The example compiles through root CMake.
- The topic is linked from `LEARNING_PATH.md`.
- The code teaches a real concept, not only syntax.
- Naming and formatting match the rest of the repository.

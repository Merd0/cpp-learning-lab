# cpp-learning-lab

Modern C++ Systems Foundation is a long-term C++ learning and reference lab.
The goal is not to collect random snippets. The goal is to build a repository
that explains C++ topics deeply enough to be useful later in interviews,
internships, embedded or systems work, and offline review.

This repository is designed around three layers:

1. Language foundation: syntax, types, references, functions, classes, and OOP.
2. Engineering foundation: RAII, ownership, STL, tests, CMake, and CI.
3. Systems mindset: memory layout, performance, concurrency, low-level behavior,
   and production-style project structure.

## Repository Structure

```txt
.
├── docs/                 # Build, style, debugging, and topic templates
├── en/                   # English learning track
├── tr/                   # Turkish learning track
├── CMakeLists.txt        # Root build configuration
└── .github/workflows/    # CI build and test automation
```

## Current Foundation

- C++20-based build setup with CMake.
- Compiler warnings enabled for examples and projects.
- GitHub Actions build and test workflow.
- English and Turkish learning paths.
- First examples for toolchain, types, references, OOP, RAII, and STL.
- A modular OOP bank account project with library, demo, and tests.

## How To Build

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

For stricter local checks:

```bash
cmake -S . -B build -DCPP_LEARNING_LAB_WARNINGS_AS_ERRORS=ON
cmake --build build
ctest --test-dir build --output-on-failure
```

## Learning Tracks

- [English track](en/README.md)
- [Turkish track](tr/README.md)
- [English learning path](en/LEARNING_PATH.md)
- [Turkish learning path](tr/LEARNING_PATH.md)

## Direction

The next phases will deepen OOP, RAII, smart pointers, move semantics, STL,
templates, error handling, concurrency, and low-level C++ topics. Each serious
topic should include explanation, mistakes, real-world usage, exercises, and
working code.

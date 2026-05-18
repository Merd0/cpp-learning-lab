# Build Guide

This repository uses CMake so that examples, small projects, and tests can be
built in one consistent way.

## Requirements

- A C++20-capable compiler:
  - GCC 10+
  - Clang 12+
  - MSVC 19.29+
- CMake 3.20+
- Ninja is optional but recommended.

## Configure

```bash
cmake -S . -B build
```

With Ninja:

```bash
cmake -S . -B build -G Ninja
```

## Build

```bash
cmake --build build
```

## Run Tests

```bash
ctest --test-dir build --output-on-failure
```

## Treat Warnings As Errors

```bash
cmake -S . -B build -DCPP_LEARNING_LAB_WARNINGS_AS_ERRORS=ON
cmake --build build
```

Use this mode before pushing changes. It catches unsafe conversions, shadowed
variables, suspicious constructs, and style problems that compilers can detect.

# C++ Standard Policy

This repository uses C++17 as the compiled baseline.

## Why C++17?

- It is widely supported by GCC, Clang, and MSVC.
- It is common in production codebases that cannot upgrade toolchains quickly.
- It contains important modern features such as structured bindings,
  `std::optional`, `std::variant`, `std::string_view`, and improved constexpr.
- It is a stable foundation before introducing C++20 features such as concepts,
  ranges, coroutines, and modules.

## How C++20 Fits

C++20 should be explained in notes and future optional examples, especially for:

- concepts
- ranges
- `std::span`
- coroutines
- modules
- stronger compile-time programming

The default build should stay C++17 unless a topic explicitly needs a newer
standard.

## Practical Rule

Learn modern C++ style, but keep examples compatible with realistic company
toolchains. That balance is useful for interviews, embedded work, and restricted
development environments.

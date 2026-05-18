# Coverage Map

This repository is meant to be a practical C++ handbook, not a copy of the
entire language standard. The default coverage is complete for foundation and
intermediate review.

## Covered For Daily Work

- build tools, CMake, and CI
- basic types, initialization, scope, `enum class`, and `static`
- functions, references, const-correctness, and API intent
- classes, encapsulation, invariants, polymorphism, virtual destructors, object
  slicing, and operator overloading
- RAII, smart pointers, ownership, move semantics, Rule of 0, and Rule of 5
- STL containers, iterators, algorithms, lambdas, strings, and string views
- templates, `constexpr`, `std::optional`, `std::variant`, and `std::tuple`
- file I/O, filesystem, chrono, casts, low-level bytes, flags, and alignment
- threads, mutexes, atomics, testing practices, and simple architecture patterns

## Not The Main Target

These topics are useful but should not block the handbook from being practical:

- advanced template metaprogramming
- custom allocators
- lock-free data structures
- coroutine frameworks
- modules in production build systems
- compiler-specific embedded register maps

Add those only when there is a concrete learning or work need.

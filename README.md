# cpp-learning-lab

Modern C++ Systems Foundation is a long-term C++ learning and reference lab.
The goal is not to collect random snippets. The goal is to build a practical
offline reference for interviews, internships, embedded or systems work, and
daily syntax recall.

This repository is designed around three layers:

1. Language foundation: types, functions, references, classes, and OOP.
2. Engineering foundation: RAII, ownership, STL, templates, tests, CMake, and CI.
3. Systems mindset: memory layout, file I/O, concurrency, low-level behavior,
   and production-style project structure.

## Standard Policy

The repository uses **C++17 as the build baseline** because it is widely
available in production toolchains. C++20 and C++23 features are introduced as
modern notes where they matter, but the compiled examples stay portable and
industry-friendly.

## Repository Structure

```txt
.
|-- docs/                 # Build, style, debugging, and topic templates
|-- en/                   # English learning track
|-- tr/                   # Turkish learning track
|-- CMakeLists.txt        # Root build configuration
`-- .github/workflows/    # CI build and test automation
```

## Current Foundation

- C++17-based build setup with CMake.
- Compiler warnings enabled for examples and projects.
- GitHub Actions build and test workflow.
- English and Turkish learning paths and reference indexes.
- Examples for toolchain, types, references, OOP, RAII, smart pointers, move
  semantics, STL, templates, error handling, file I/O, low-level C++, threading,
  lambdas, compile-time programming, strings/views, casts, testing, filesystem,
  chrono, atomics, and architecture patterns.
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

## Topic Map

- `00_toolchain`: compiler, CMake, CI, and build habits.
- `01_basics`: types, initialization, `auto`, and basic standard library usage.
- `02_functions_references`: function design, references, `const`, and intent.
- `03_classes_oop`: class invariants, encapsulation, inheritance, polymorphism.
- `04_raii_memory`: RAII, lifetime, ownership, and resource cleanup.
- `05_stl`: standard containers and algorithms.
- `06_smart_pointers`: `unique_ptr`, `shared_ptr`, `weak_ptr`, and ownership.
- `07_move_semantics`: copy, move, Rule of 0, and Rule of 5 direction.
- `08_error_handling`: exceptions, `std::optional`, and status-style returns.
- `09_file_io`: stream-based text record I/O.
- `10_templates`: reusable type-safe generic code.
- `11_low_level_cpp`: bytes, alignment, flags, and systems mental model.
- `12_concurrency`: threads, mutexes, and safe shared state.
- `13_patterns_architecture`: small design patterns without overengineering.
- `14_core_language_details`: scope, `enum class`, `static`, and state control.
- `15_strings_views`: `std::string`, `std::string_view`, and text lifetime.
- `16_containers_iterators`: map, set, iterator usage, and container choice.
- `17_lambdas_algorithms`: captures, predicates, transforms, and algorithm use.
- `18_compile_time_constexpr`: `constexpr`, `static_assert`, compile-time data.
- `19_variant_tuple_enum`: `std::variant`, `std::tuple`, and alternative data.
- `20_operator_overloading`: value-type operators without surprising behavior.
- `21_namespaces_headers`: API boundaries, namespaces, and header discipline.
- `22_casts_type_safety`: explicit casts and safer downcasting.
- `23_testing_practices`: simple deterministic tests and failure behavior.
- `24_filesystem_chrono`: portable paths and type-safe time measurement.
- `25_atomics_intro`: atomic counters and shared state basics.

## Maintenance Rule

Add new material only when it teaches a real C++ idea, compiles cleanly, and is
linked from the learning path. The repository should stay useful as a handbook,
not become a pile of disconnected examples.

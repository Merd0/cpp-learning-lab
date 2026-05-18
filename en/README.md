# English Track

This track explains C++ in English so the repository can work as a
portfolio-friendly and offline reference. The focus is C++17 production habits
with C++20 awareness: clear ownership, value semantics, RAII, STL, OOP design,
and build discipline.

## Topics

- `00_toolchain`: compiler, CMake, CI, and first executable.
- `01_basics`: types, initialization, `auto`, and safer defaults.
- `02_functions_references`: functions, references, `const`, and mutation
  intent.
- `03_classes_oop`: classes, invariants, encapsulation, polymorphism, and
  virtual destructors.
- `04_raii_memory`: resource lifetime and ownership.
- `05_stl`: standard containers and algorithms.
- `06_smart_pointers`: `unique_ptr`, `shared_ptr`, `weak_ptr`.
- `07_move_semantics`: copy, move, Rule of 0, and Rule of 5 direction.
- `08_error_handling`: exceptions, `std::optional`, and status enums.
- `09_file_io`: stream-based text file records.
- `10_templates`: reusable type-safe generic code.
- `11_low_level_cpp`: bytes, alignment, and flags.
- `12_concurrency`: threads, mutexes, and shared state.
- `13_patterns_architecture`: small design patterns and architecture decisions.
- `projects/bank_account_oop`: modular OOP project with tests.

## How To Study

1. Follow `LEARNING_PATH.md`.
2. Read the topic README before the example.
3. Build everything from the repository root.
4. Trace object lifetime, ownership, and invariants.
5. Modify one behavior and rebuild.
6. Add new examples only when they teach a real concept.

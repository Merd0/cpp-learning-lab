# Code Style

This repository is a learning resource, so code should be clear before it is
clever. Examples should teach the mental model behind the feature.

## General Rules

- Prefer modern C++ resource ownership: RAII, standard containers, and smart
  pointers.
- Prefer `std::vector`, `std::array`, `std::string`, and other standard library
  types before raw arrays and manual memory management.
- Use `const` where it communicates intent.
- Use references for non-null borrowed objects.
- Use pointers when nullability, reseating, or ownership discussion matters.
- Keep examples small enough to study, but realistic enough to matter.
- Avoid magic numbers. Name important constants.
- Prefer exceptions for constructor invariant failures in beginner examples.

## OOP Rules

- Keep class invariants explicit.
- Prefer composition before inheritance.
- Use virtual destructors for polymorphic base classes.
- Avoid exposing mutable internal state.
- Show copy and move behavior when a class owns a resource.
- Explain object slicing whenever inheritance is introduced.

## File Naming

- Use `snake_case` for file names.
- Use focused names such as `class_invariants.cpp` instead of `example1.cpp`.
- Put project code under `include/`, `src/`, and `tests/` when the topic becomes
  larger than one file.

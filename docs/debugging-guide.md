# Debugging Guide

Debugging C++ is partly about tools and partly about reading ownership,
lifetime, and invariants.

## First Checks

1. Rebuild with warnings enabled.
2. Run the relevant executable or test.
3. Reduce the failing case.
4. Check object lifetime, references, and ownership.
5. Check whether a class invariant can be broken from outside the class.

## Useful Local Commands

```bash
cmake -S . -B build -DCPP_LEARNING_LAB_WARNINGS_AS_ERRORS=ON
cmake --build build
ctest --test-dir build --output-on-failure
```

## Common C++ Failure Areas

- Dangling references or pointers.
- Missing virtual destructor in a polymorphic base class.
- Accidentally copying an expensive object.
- Moving from an object and then assuming its old value is still meaningful.
- Using manual `new` and `delete` when a standard library type should own the
  resource.
- Breaking class invariants through public mutable state.

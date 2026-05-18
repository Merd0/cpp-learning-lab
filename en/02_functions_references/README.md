# Functions And References

Functions should make ownership and mutation clear. References are useful when
a function needs to work with an existing object without copying it.

## Key Ideas

- Pass small values by value.
- Pass expensive read-only objects by `const&`.
- Pass mutable objects by non-const reference only when mutation is intended.
- Return values normally. Modern compilers optimize many returns well.
- Use `noexcept` when a function is guaranteed not to throw.

## Example

- `references_const_correctness.cpp`: value, const reference, and mutable
  reference parameters.

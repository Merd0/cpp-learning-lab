# Compile-Time And Constexpr

C++ can compute some values at compile time. This improves safety and can remove
runtime work when the inputs are known early.

## Mental Model

- `const` means the value cannot be modified through that name.
- `constexpr` means the value or function can participate in compile-time
  evaluation.
- `static_assert` checks a condition during compilation.
- Compile-time code should still stay readable.

## Common Mistakes

- Assuming every `const` value is compile-time.
- Making code `constexpr` before it needs to be.
- Hiding complicated runtime logic in compile-time tricks.

## Example

- `constexpr_lookup.cpp`: computes small lookup values and validates them with
  `static_assert`.

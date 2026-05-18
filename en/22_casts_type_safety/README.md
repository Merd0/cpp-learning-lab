# Casts And Type Safety

C++ casts should be visible and intentional. A cast is often a sign that two
parts of the program disagree about types.

## Mental Model

- `static_cast` is for checked-at-compile-time conversions.
- `dynamic_cast` is for safe downcasting through polymorphic bases.
- `const_cast` changes constness and should be rare.
- `reinterpret_cast` treats bits as another type and belongs near low-level
  boundaries.
- Prefer designing APIs that avoid casts.

## Common Mistakes

- Using C-style casts because they are shorter.
- Downcasting when virtual functions would be cleaner.
- Narrowing numbers without checking range.

## Example

- `casts_type_safety.cpp`: shows numeric casts and safe polymorphic downcast.

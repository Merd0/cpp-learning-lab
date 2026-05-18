# Basics

C++ basics should be learned with type safety in mind. The language lets you
write low-level code, but modern C++ also gives safer abstractions.

## Key Ideas

- Prefer brace initialization: `int value{42};`
- Use `std::string` instead of manual character arrays for normal text.
- Use `std::array` when the size is fixed.
- Use `auto` when the type is obvious from the right-hand side.
- Avoid uninitialized variables.

## Example

- `types_and_initialization.cpp`: basic types and safer initialization.

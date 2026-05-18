# Core Language Details

Small language rules shape large C++ programs. Scopes, `enum class`, `static`,
`const`, and namespaces help keep names and state controlled.

## Mental Model

- Scope decides where a name is visible.
- `enum class` avoids unscoped integer-like enum pollution.
- `static` local variables keep state between calls.
- `static` class members belong to the class, not one object.
- Prefer explicit ownership and explicit state over hidden globals.

## Common Mistakes

- Using unscoped `enum` values that collide with other names.
- Hiding state in globals when a class or function parameter would be clearer.
- Confusing `const` object state with compile-time constants.

## Example

- `scope_enum_static.cpp`: shows controlled names, scoped enum values, and class
  level state.

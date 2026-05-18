# Strings And Views

`std::string` owns text. `std::string_view` observes text. Knowing the
difference prevents needless copies and dangling views.

## Mental Model

- `std::string` stores and owns characters.
- `std::string_view` points at existing characters and does not own them.
- Use `std::string_view` for read-only function parameters when the function
  does not store the view.
- Never return a `string_view` to a local `std::string`.

## Common Mistakes

- Storing a `string_view` after the original string has been destroyed.
- Using C-style string functions when `std::string` is enough.
- Passing large strings by value when no copy is needed.

## Example

- `string_string_view.cpp`: trims and checks text without copying it.

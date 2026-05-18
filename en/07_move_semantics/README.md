# Move Semantics

Move semantics allow resources to be transferred instead of copied. They are
central to modern C++ performance and ownership design.

## Mental Model

- Copying duplicates a value.
- Moving transfers resources from one object to another.
- A moved-from object must remain valid, but its old value should not be relied
  on unless the type documents it.
- Rule of 0: prefer standard library members so the compiler can generate copy,
  move, and destruction behavior.
- Rule of 5: if a class manually owns a resource, think about destructor, copy
  constructor, copy assignment, move constructor, and move assignment together.

## Example

- `rule_of_zero_and_move.cpp`: shows a resource-owning wrapper that can use the
  Rule of 0 because `std::vector` manages memory.

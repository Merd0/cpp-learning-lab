# Classes And OOP

OOP in C++ is not only about writing `class`. It is about protecting invariants,
modeling ownership, and deciding when runtime polymorphism is worth the cost.

## Key Ideas

- A class should protect its invariants.
- Constructors create valid objects or fail.
- Public functions are the safe interface.
- Use `const` member functions for read-only operations.
- Prefer composition before inheritance.
- Use a virtual destructor for polymorphic base classes.
- Avoid object slicing when working with derived objects.

## Examples

- `class_invariants.cpp`: constructor validation and private state.
- `polymorphism_virtual_destructor.cpp`: abstract base class and virtual
  destructor.

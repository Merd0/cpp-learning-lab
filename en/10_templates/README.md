# Templates

Templates let code work with types known at compile time. They are powerful, but
they should be used to remove real duplication or express a type-safe pattern.

## Mental Model

- Function templates generate functions for the used types.
- Class templates generate classes for the used types.
- Templates are checked when instantiated.
- Clear names and small interfaces matter because template errors can be noisy.

## Example

- `template_repository.cpp`: a tiny generic repository with a predicate-based
  lookup.

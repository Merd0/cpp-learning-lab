# Error Handling

C++ code should make failure modes explicit. Not every failure needs an
exception, and not every status code is enough.

## Mental Model

- Use exceptions for construction failures and violations that prevent normal
  execution.
- Use `std::optional<T>` when a result may simply be absent.
- Use status enums when callers need to branch on known outcomes.
- Keep validation close to the boundary where data enters the system.

## Example

- `optional_exceptions_status.cpp`: combines `std::optional`, exceptions, and a
  small status enum.

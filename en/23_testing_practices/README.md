# Testing Practices

Tests protect behavior while you refactor. Even a tiny test harness is better
than manually running a program and reading output every time.

## Mental Model

- Test observable behavior, not private implementation details.
- Keep tests deterministic.
- Test edge cases and failure paths.
- A failing test should stop the build.
- For real projects, use a test framework; for learning examples, a small
  helper can be enough.

## Common Mistakes

- Testing only the happy path.
- Depending on test execution order.
- Printing failures but still returning success.

## Example

- `simple_test_harness.cpp`: a tiny framework-free test runner.

# Operator Overloading

Operator overloading should make value types feel natural. It should not hide
expensive work or surprising side effects.

## Mental Model

- Overload operators for value types such as money, vectors, or IDs.
- Keep operators consistent with normal expectations.
- Prefer named functions when the operation is domain-specific.
- Implement compound assignment first when useful, then derive binary operators.

## Common Mistakes

- Overloading operators for clever syntax instead of clarity.
- Making `operator+` modify the left-hand object.
- Forgetting `const` correctness.

## Example

- `value_type_operator.cpp`: implements a small `Money` value type.

# Variant, Tuple, And Enum

Some data can be one of several known alternatives. C++17 gives `std::variant`
for type-safe alternatives and `std::tuple` for fixed groups of values.

## Mental Model

- `enum class` names a closed set of states.
- `std::variant<A, B>` stores exactly one of the listed types.
- `std::visit` handles the active variant alternative.
- `std::tuple` groups values when a small named struct would be too much.
- Prefer a named struct when field names matter.

## Common Mistakes

- Using inheritance when a `variant` would model alternatives more simply.
- Using tuple fields so heavily that names would be clearer.
- Forgetting to handle every variant alternative.

## Example

- `variant_tuple_enum.cpp`: models messages as known alternatives.

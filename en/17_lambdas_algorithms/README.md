# Lambdas And Algorithms

Lambdas let behavior stay close to the algorithm that uses it. They are most
useful when paired with standard algorithms.

## Mental Model

- `[]` is the capture list.
- `[value]` captures by value.
- `[&value]` captures by reference.
- Prefer algorithms when they express intent more clearly than manual loops.
- Keep lambdas short and named with variables when they become important.

## Common Mistakes

- Capturing references that outlive the referenced object.
- Writing a long lambda that should be a named function.
- Using `for_each` when a simple range-for loop is clearer.

## Example

- `lambda_algorithm_pipeline.cpp`: filters, transforms, and sums values with
  lambdas and algorithms.

# Patterns And Architecture

Patterns are useful when they name a real design pressure. They become harmful
when they are added before the problem exists.

## Mental Model

- Prefer simple functions and composition first.
- Use Strategy when behavior must be interchangeable.
- Use Factory when object creation has enough variation to hide behind a
  function.
- Keep interfaces small and stable.

## Example

- `strategy_pattern.cpp`: uses a pricing strategy without hardcoding one
  discount rule into checkout logic.

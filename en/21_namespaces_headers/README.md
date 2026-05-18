# Namespaces And Header Design

Large C++ projects need boundaries. Namespaces and headers make APIs visible
without exposing every implementation detail.

## Mental Model

- A header declares the public interface.
- A source file defines implementation details.
- Namespaces prevent name collisions.
- Keep headers small because every include affects compile time.
- Prefer including what you use instead of relying on indirect includes.

## Common Mistakes

- Putting `using namespace std;` in a header.
- Exposing private helper functions in public headers.
- Including heavy headers when a forward declaration would be enough.

## Example

- `namespace_api_design.cpp`: simulates a small namespaced API in one file.

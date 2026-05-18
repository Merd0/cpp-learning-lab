# RAII And Memory

RAII means Resource Acquisition Is Initialization. A resource should be tied to
an object's lifetime so cleanup happens automatically.

## Key Ideas

- Constructors acquire resources.
- Destructors release resources.
- `std::unique_ptr` expresses single ownership.
- `std::shared_ptr` expresses shared ownership, but should not be the default.
- Prefer standard containers over manual dynamic arrays.
- Raw pointers are usually non-owning views in modern C++ code.

## Example

- `raii_unique_ptr.cpp`: basic ownership transfer with `std::unique_ptr`.

# Filesystem And Chrono

C++17 added standard filesystem support. `std::chrono` gives type-safe time
durations and timestamps.

## Mental Model

- `std::filesystem::path` represents paths portably.
- Use filesystem functions instead of manual string path manipulation.
- `std::chrono::duration` represents an amount of time.
- `std::chrono::time_point` represents a point in time.

## Common Mistakes

- Building paths with raw string concatenation.
- Mixing milliseconds and seconds as plain integers.
- Assuming path separators are the same on every operating system.

## Example

- `filesystem_chrono.cpp`: creates a path and measures a small operation.

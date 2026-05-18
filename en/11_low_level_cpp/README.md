# Low-Level C++

C++ can model low-level data while still using safer abstractions. The important
part is knowing where bytes, alignment, flags, and object lifetime matter.

## Mental Model

- `sizeof(T)` tells how many bytes an object occupies.
- `alignof(T)` tells the required alignment.
- `std::byte` represents raw bytes without pretending they are characters.
- Bit flags compactly store multiple boolean states.
- Low-level code needs clear boundaries and tests.

## Example

- `bytes_alignment_flags.cpp`: shows byte values, alignment, and bit flags.

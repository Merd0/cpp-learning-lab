# Smart Pointers

Smart pointers make ownership visible in the type system. They do not remove
the need to understand lifetime, but they make common lifetime mistakes harder.

## Mental Model

- `std::unique_ptr<T>` means one owner.
- `std::shared_ptr<T>` means shared ownership.
- `std::weak_ptr<T>` observes a shared object without extending its lifetime.
- Raw pointers and references are usually non-owning views in modern C++.

## Common Mistakes

- Using `shared_ptr` everywhere because it feels convenient.
- Creating ownership cycles with `shared_ptr`.
- Returning raw owning pointers from factory functions.
- Keeping a raw pointer after the owner has destroyed the object.

## Example

- `unique_shared_weak.cpp`: compares single ownership, shared ownership, and
  non-owning observation.

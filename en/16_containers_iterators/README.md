# Containers And Iterators

STL containers solve different storage and lookup problems. Iterators are the
common access model that lets algorithms work with many containers.

## Mental Model

- `std::vector` is the default sequence container.
- `std::map` keeps keys ordered.
- `std::unordered_map` optimizes average lookup by hash.
- `std::set` stores unique sorted values.
- Iterators point into containers; invalidation rules matter.

## Common Mistakes

- Choosing `map` when unordered lookup would be enough.
- Erasing from a container while using an invalidated iterator.
- Using a container without thinking about lookup and iteration needs.

## Example

- `map_set_iterator.cpp`: builds a frequency table and extracts sorted unique
  keys.

# Atomics Intro

Atomics let simple shared values be updated without a mutex. They are powerful,
but they are not a replacement for understanding thread ownership and invariants.

## Mental Model

- `std::atomic<T>` makes operations on `T` atomic.
- Atomic counters are simple; lock-free algorithms are advanced.
- Prefer mutexes for compound state and invariants.
- Start with default sequentially consistent ordering before learning weaker
  memory orders.

## Common Mistakes

- Assuming atomics automatically make a whole object thread-safe.
- Mixing atomic and non-atomic access to the same value.
- Using relaxed memory ordering without a proof.

## Example

- `atomic_counter.cpp`: increments a shared atomic counter from multiple
  threads.

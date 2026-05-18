# Concurrency

Concurrency lets multiple tasks make progress, but shared state must be
protected. Correctness matters more than clever threading.

## Mental Model

- `std::thread` starts work on another thread.
- `std::mutex` protects shared mutable state.
- `std::lock_guard` locks in a scope and unlocks automatically.
- Avoid sharing data unless there is a clear reason.

## Example

- `thread_safe_counter.cpp`: increments a shared counter safely from multiple
  threads.

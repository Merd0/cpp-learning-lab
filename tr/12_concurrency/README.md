# Concurrency

Concurrency birden fazla işin ilerlemesini sağlar; ama shared state korunmak
zorundadır. Doğruluk, havalı threading kullanımından daha önemlidir.

## Mental Model

- `std::thread` başka thread üzerinde iş başlatır.
- `std::mutex` shared mutable state'i korur.
- `std::lock_guard` scope başında lock alır, scope sonunda otomatik bırakır.
- Veri paylaşma, gerçekten gerekmediği sürece azaltılmalıdır.

## Örnek

- `thread_safe_counter.cpp`: bir counter değerini birden fazla thread'den
  güvenli artırır.

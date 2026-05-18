# Atomic Giriş

Atomicler basit shared değerlerin mutex olmadan güncellenmesini sağlar. Güçlüdür
ama thread ownership ve invariant bilgisi yerine geçmez.

## Mental Model

- `std::atomic<T>`, `T` üzerindeki işlemleri atomic hale getirir.
- Atomic counter basittir; lock-free algorithm ileri konudur.
- Birden fazla alandan oluşan state ve invariant için mutex daha uygundur.
- Zayıf memory order öğrenmeden önce default sequentially consistent davranışla
  başlamak daha güvenlidir.

## Yaygın Hatalar

- Atomic kullanınca tüm object thread-safe oldu sanmak.
- Aynı değere hem atomic hem non-atomic erişmek.
- Kanıt olmadan relaxed memory ordering kullanmak.

## Örnek

- `atomic_counter.cpp`: shared atomic counter'ı birden fazla thread'den artırır.

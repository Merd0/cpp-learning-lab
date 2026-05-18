# Fonksiyonlar Ve Referanslar

Fonksiyonlar ownership ve mutation niyetini açık göstermelidir. Referanslar,
bir fonksiyonun mevcut bir nesneyle kopya almadan çalışmasını sağlar.

## Temel Fikirler

- Küçük değerleri value olarak geçir.
- Büyük ve read-only nesneleri `const&` ile geçir.
- Non-const reference kullanıyorsan fonksiyonun nesneyi değiştirdiği net olsun.
- Normalde return value kullan. Modern derleyiciler birçok return işlemini iyi
  optimize eder.
- Fonksiyon throw etmeyecekse `noexcept` niyeti güçlendirir.

## Örnek

- `references_const_correctness.cpp`: value, const reference ve mutable
  reference parametreleri.

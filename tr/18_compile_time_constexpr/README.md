# Compile-Time Ve Constexpr

C++ bazı değerleri compile time'da hesaplayabilir. Girdiler erkenden biliniyorsa
bu hem güvenliği artırır hem runtime işi azaltabilir.

## Mental Model

- `const`, o isim üzerinden değerin değiştirilemeyeceğini söyler.
- `constexpr`, değer veya fonksiyonun compile-time evaluation'a katılabileceğini
  söyler.
- `static_assert`, koşulu derleme sırasında kontrol eder.
- Compile-time kod da okunabilir kalmalıdır.

## Yaygın Hatalar

- Her `const` değeri compile-time sanmak.
- Gerekmeyen yere `constexpr` zorlamak.
- Karmaşık runtime logic'i compile-time numaraya çevirmek.

## Örnek

- `constexpr_lookup.cpp`: küçük lookup değerlerini hesaplar ve `static_assert`
  ile doğrular.

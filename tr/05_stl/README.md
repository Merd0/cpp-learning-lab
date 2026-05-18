# STL Temeli

Standard library modern C++'ın büyük bir parçasıdır. İyi C++ kodu çoğu zaman
manuel loop ve raw memory yerine standard container ve algorithm kullanır.

## Temel Fikirler

- `std::vector` varsayılan dynamic sequence container olarak düşünülebilir.
- `std::sort`, `std::count_if`, `std::transform` gibi algorithmler niyeti daha
  açık gösterir.
- Iteratorlar container ve algorithmleri birbirine bağlar.
- Operasyonu anlatan algorithm isimlerini tercih et.

## Örnek

- `vector_algorithm_basics.cpp`: sıralama, filtreleme ve değer dönüştürme.

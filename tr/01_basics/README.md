# Temel Konular

C++ temeli type safety düşüncesiyle öğrenilmeli. Dil düşük seviyeye inmeye izin
verir, ama modern C++ aynı zamanda daha güvenli abstractionlar sunar.

## Temel Fikirler

- Brace initialization tercih et: `int value{42};`
- Normal metin için manuel char array yerine `std::string` kullan.
- Boyut sabitse `std::array` kullan.
- Sağ taraftan tip net anlaşılıyorsa `auto` okunabilirliği artırabilir.
- Uninitialized değişken bırakma.

## Örnek

- `types_and_initialization.cpp`: temel tipler ve daha güvenli initialization.

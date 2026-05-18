# RAII Ve Memory

RAII, Resource Acquisition Is Initialization demektir. Bir resource, bir
nesnenin lifetime'ına bağlanırsa cleanup otomatik ve güvenli hale gelir.

## Temel Fikirler

- Constructor resource alır.
- Destructor resource bırakır.
- `std::unique_ptr` tek ownership ifade eder.
- `std::shared_ptr` paylaşımlı ownership ifade eder, ama default seçenek
  olmamalıdır.
- Manuel dynamic array yerine standard container tercih et.
- Modern C++ kodunda raw pointer çoğu zaman non-owning view anlamına gelir.

## Örnek

- `raii_unique_ptr.cpp`: `std::unique_ptr` ile ownership transferi.

# Container Ve Iterator

STL containerları farklı saklama ve lookup problemlerini çözer. Iteratorlar,
algorithmlerin birçok container ile çalışmasını sağlayan ortak erişim modelidir.

## Mental Model

- `std::vector` varsayılan sequence container olarak düşünülebilir.
- `std::map` keyleri sıralı tutar.
- `std::unordered_map` ortalama lookup süresini hash ile optimize eder.
- `std::set` unique ve sıralı değer saklar.
- Iteratorlar container içine bakar; invalidation kuralları önemlidir.

## Yaygın Hatalar

- Hash lookup yeterliyken `map` seçmek.
- Silme işlemi sonrası invalid iterator kullanmak.
- Lookup ve iteration ihtiyacını düşünmeden container seçmek.

## Örnek

- `map_set_iterator.cpp`: frequency table kurar ve sıralı unique key çıkarır.

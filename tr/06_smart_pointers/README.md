# Smart Pointerlar

Smart pointerlar ownership bilgisini tip sisteminde görünür hale getirir.
Lifetime bilgisini gereksiz yapmaz; ama sık yapılan ownership hatalarını azaltır.

## Mental Model

- `std::unique_ptr<T>` tek sahip demektir.
- `std::shared_ptr<T>` paylaşımlı ownership demektir.
- `std::weak_ptr<T>` shared nesneyi sahip olmadan gözlemler.
- Modern C++ kodunda raw pointer ve reference çoğu zaman non-owning view'dir.

## Yaygın Hatalar

- Kolay geliyor diye her yerde `shared_ptr` kullanmak.
- `shared_ptr` ile ownership cycle oluşturmak.
- Factory fonksiyonundan owning raw pointer döndürmek.
- Owner nesne yok olduktan sonra raw pointer saklamak.

## Örnek

- `unique_shared_weak.cpp`: tek ownership, shared ownership ve non-owning
  observation farkını gösterir.

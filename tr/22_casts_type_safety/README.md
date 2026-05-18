# Cast Ve Type Safety

C++ castleri görünür ve bilinçli olmalıdır. Bir cast çoğu zaman programın iki
parçasının tipler konusunda anlaşamadığını gösterir.

## Mental Model

- `static_cast`, compile-time kontrol edilebilen dönüşümler içindir.
- `dynamic_cast`, polymorphic base üzerinden güvenli downcast içindir.
- `const_cast`, constness değiştirir ve nadir kullanılmalıdır.
- `reinterpret_cast`, bitleri başka tip gibi yorumlar ve low-level sınırlarda
  kalmalıdır.
- Cast gerektirmeyen API tasarımı genelde daha iyidir.

## Yaygın Hatalar

- Kısa diye C-style cast kullanmak.
- Virtual function daha temizken downcast yapmak.
- Range kontrolü olmadan daraltıcı numeric cast yapmak.

## Örnek

- `casts_type_safety.cpp`: numeric cast ve güvenli polymorphic downcast gösterir.

# Templates

Templates, compile-time'da bilinen tiplerle tekrar kullanılabilir kod yazmayı
sağlar. Güçlüdür; ama gerçek duplication azaltmak veya type-safe pattern
kurmak için kullanılmalıdır.

## Mental Model

- Function template, kullanılan tiplere göre fonksiyon üretir.
- Class template, kullanılan tiplere göre class üretir.
- Template kodu instantiate edildiğinde kontrol edilir.
- Template hata mesajları uzun olabileceği için küçük interface ve açık isimler
  önemlidir.

## Örnek

- `template_repository.cpp`: predicate ile arama yapan küçük generic repository.

# String Ve View

`std::string` metne sahip olur. `std::string_view` mevcut metni sahip olmadan
gözlemler. Bu farkı bilmek gereksiz copy ve dangling view hatalarını azaltır.

## Mental Model

- `std::string` karakterleri saklar ve sahiplenir.
- `std::string_view` mevcut karakterlere bakar, ownership almaz.
- Fonksiyon sadece okuyorsa ve view saklamıyorsa parametre için
  `std::string_view` kullanılabilir.
- Local `std::string`e bakan `string_view` return etme.

## Yaygın Hatalar

- Orijinal string yok olduktan sonra `string_view` saklamak.
- `std::string` yeterliyken C-style string fonksiyonlarına dönmek.
- Copy gerekmeyen yerde büyük stringleri value ile geçirmek.

## Örnek

- `string_string_view.cpp`: metni copy etmeden trim ve prefix kontrolü yapar.

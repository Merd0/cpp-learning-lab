# Namespace Ve Header Tasarımı

Büyük C++ projelerinde sınırlar gerekir. Namespace ve header dosyaları, her
implementation detayını açmadan API görünürlüğü sağlar.

## Mental Model

- Header public interface bildirir.
- Source file implementation detaylarını tanımlar.
- Namespace isim çakışmalarını önler.
- Header küçük tutulmalıdır çünkü her include compile time'ı etkiler.
- Dolaylı include'a güvenmek yerine kullandığın şeyi include et.

## Yaygın Hatalar

- Header içinde `using namespace std;` yazmak.
- Private helper fonksiyonları public header'a koymak.
- Forward declaration yeterliyken ağır header include etmek.

## Örnek

- `namespace_api_design.cpp`: tek dosyada küçük namespaced API tasarımı gösterir.

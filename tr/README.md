# Türkçe Yol

Bu klasör C++ konularını Türkçe anlatır. Amaç sadece syntax ezberi yapmak
değil; OOP, RAII, ownership, STL, test, CMake ve sürdürülebilir proje düzenini
birlikte öğrenmektir.

## Mevcut Konular

- `00_toolchain`: derleyici, CMake ve ilk çalıştırılabilir dosya.
- `01_basics`: tipler, initialization, `auto` ve temel çıktı.
- `02_functions_references`: fonksiyonlar, referanslar, `const` ve niyet.
- `03_classes_oop`: class, invariant, polymorphism ve virtual destructor.
- `04_raii_memory`: RAII, ownership ve smart pointer yönü.
- `05_stl`: standart container ve algorithm temeli.
- `projects/bank_account_oop`: testli küçük modüler OOP projesi.

## Nasıl Çalışılır?

1. Önce konu README dosyasını oku.
2. Örneği root CMake build ile derle ve çalıştır.
3. Kodda object lifetime ve ownership akışını takip et.
4. Küçük bir davranışı değiştirip tekrar build al.
5. Konu netleşince küçük bir test veya egzersiz ekle.

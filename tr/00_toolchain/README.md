# Toolchain

Profesyonel ilk alışkanlık, kodun her ortamda aynı komutlarla build
edilebilmesidir. Bu repo CMake kullanır; böylece örnekler, küçük projeler ve
testler tek düzenle derlenebilir.

## Temel Fikirler

- Derleyici C++ kaynak dosyasını makine koduna çevirir.
- CMake, Ninja, Make veya Visual Studio gibi build araçları için proje üretir.
- CI, GitHub üzerinde aynı build komutlarını otomatik çalıştırır.
- Warning mesajları gürültü değil, erken geri bildirimdir.

## Örnek

- `hello_modern_cpp.cpp`: standart kütüphane tipleriyle ilk küçük executable.

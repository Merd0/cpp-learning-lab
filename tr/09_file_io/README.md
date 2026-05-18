# File I/O

File I/O, C++ programının dış dünyayla veri alışverişi yaptığı yerdir. Stream
yapıları, çoğu öğrenme ve uygulama seviyesinde C-style buffer yönetiminden daha
güvenlidir.

## Mental Model

- `std::ofstream` dosyaya yazar.
- `std::ifstream` dosyadan okur.
- Dosya açma başarılı mı mutlaka kontrol edilir.
- Parser yazmadan önce basit ve okunabilir bir record formatı seçilir.
- Parsing logic, iş kuralından ayrı tutulmalıdır.

## Örnek

- `file_stream_records.cpp`: text record yazar ve geri okur.

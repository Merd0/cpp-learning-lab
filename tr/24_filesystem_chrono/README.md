# Filesystem Ve Chrono

C++17 standart filesystem desteği getirdi. `std::chrono` ise type-safe süre ve
zaman noktası kullanımı sağlar.

## Mental Model

- `std::filesystem::path`, path bilgisini taşınabilir şekilde temsil eder.
- Path stringlerini elle birleştirmek yerine filesystem fonksiyonları kullanılır.
- `std::chrono::duration`, süre miktarını temsil eder.
- `std::chrono::time_point`, zamandaki bir noktayı temsil eder.

## Yaygın Hatalar

- Pathleri raw string concatenation ile kurmak.
- Milisaniye ve saniyeyi düz integer olarak karıştırmak.
- Path separator'ın her işletim sisteminde aynı olduğunu varsaymak.

## Örnek

- `filesystem_chrono.cpp`: path oluşturur ve küçük bir işlemin süresini ölçer.

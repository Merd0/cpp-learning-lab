# Lambda Ve Algorithm

Lambdalar davranışı kullanan algorithmin yanında tutmayı sağlar. En faydalı
halleri standard algorithmlerle birlikte kullanıldığında ortaya çıkar.

## Mental Model

- `[]` capture listesidir.
- `[value]` value ile capture eder.
- `[&value]` reference ile capture eder.
- Niyeti daha net anlatıyorsa standard algorithm tercih edilir.
- Lambda uzuyorsa named function daha iyi olabilir.

## Yaygın Hatalar

- Referans capture edilen nesneden daha uzun yaşayan lambda tutmak.
- Uzun lambda yazıp okunabilirliği düşürmek.
- Basit range-for daha netken `for_each` kullanmak.

## Örnek

- `lambda_algorithm_pipeline.cpp`: lambda ve algorithm ile filtreleme,
  dönüştürme ve toplama yapar.

# Test Pratikleri

Testler refactor sırasında davranışı korur. Küçük bir test harness bile her
seferinde programı manuel çalıştırıp çıktıya bakmaktan iyidir.

## Mental Model

- Private implementation değil observable behavior test edilir.
- Testler deterministic olmalıdır.
- Edge case ve failure path test edilir.
- Başarısız test build'i durdurmalıdır.
- Gerçek projelerde test framework kullanılır; öğrenme örneklerinde küçük helper
  yeterli olabilir.

## Yaygın Hatalar

- Sadece happy path test etmek.
- Test çalışma sırasına bağımlı olmak.
- Hata yazdırıp yine success return etmek.

## Örnek

- `simple_test_harness.cpp`: framework kullanmadan küçük test runner gösterir.

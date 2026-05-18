# Hata Yönetimi

C++ kodu hata ihtimallerini açık göstermelidir. Her hata exception istemez,
her status code da yeterli değildir.

## Mental Model

- Constructor başarısızlığı ve normal akışı sürdüremeyen durumlarda exception
  kullanılabilir.
- Sonuç bazen yoksa `std::optional<T>` uygundur.
- Çağıran taraf bilinen durumlara göre karar verecekse status enum kullanılır.
- Validation, verinin sisteme girdiği sınıra yakın yerde yapılmalıdır.

## Örnek

- `optional_exceptions_status.cpp`: `std::optional`, exception ve küçük status
  enum kullanımını birlikte gösterir.

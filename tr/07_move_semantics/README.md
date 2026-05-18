# Move Semantics

Move semantics, resource kopyalamak yerine resource sahipliğini başka bir
nesneye taşımayı sağlar. Modern C++ performansı ve ownership tasarımı için çok
kritiktir.

## Mental Model

- Copy, değeri çoğaltır.
- Move, resource'u başka nesneye taşır.
- Moved-from nesne geçerli kalmalıdır, ama eski değerine güvenilmemelidir.
- Rule of 0: mümkünse standard library üyeleri kullan, compiler özel memberları
  kendisi üretsin.
- Rule of 5: class manuel resource yönetiyorsa destructor, copy constructor,
  copy assignment, move constructor ve move assignment birlikte düşünülür.

## Örnek

- `rule_of_zero_and_move.cpp`: `std::vector` sayesinde Rule of 0 ile memory
  yönetimi yapan küçük wrapper örneği.

# Bank Account OOP Projesi

Bu proje repodaki ilk modüler OOP örneğidir. Interface, implementation, demo
kodu ve testleri ayrı dosyalara böler.

## Yapı

```txt
bank_account_oop/
|-- include/bank_account.h
|-- src/bank_account.cpp
|-- src/main.cpp
`-- tests/test_bank_account.cpp
```

## Konular

- Constructor validation.
- Private data ve public behavior.
- Class invariant.
- `const` member function.
- Geçersiz input için exception tabanlı validation.
- Parayı floating point yerine integer kuruş olarak temsil etme.
- Küçük assert tabanlı testler.

## Build

Repo root klasöründen:

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

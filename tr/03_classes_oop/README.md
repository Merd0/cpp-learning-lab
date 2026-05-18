# Class Ve OOP

C++ OOP sadece `class` yazmak değildir. Asıl mesele invariant korumak,
ownership modellemek ve runtime polymorphism gerçekten gerekli mi kararını
verebilmektir.

## Temel Fikirler

- Class kendi invariantlarını korumalıdır.
- Constructor geçerli nesne üretmeli veya hata vermelidir.
- Public fonksiyonlar güvenli interface oluşturur.
- Read-only operasyonlar için `const` member function kullan.
- Inheritance öncesi composition düşün.
- Polymorphic base class için virtual destructor kullan.
- Derived objectleri base value olarak kopyalarken object slicing riskini bil.

## Örnekler

- `class_invariants.cpp`: constructor validation ve private state.
- `polymorphism_virtual_destructor.cpp`: abstract base class ve virtual
  destructor.

# Core Language Detayları

Küçük dil kuralları büyük C++ programlarının şeklini belirler. Scope,
`enum class`, `static`, `const` ve namespace kullanımı isimleri ve state'i
kontrol altında tutar.

## Mental Model

- Scope, bir ismin nerede görülebileceğini belirler.
- `enum class`, enum değerlerinin başka isimlerle çakışmasını azaltır.
- Local `static` değişken çağrılar arasında state saklar.
- Class `static` üyeleri tek bir objeye değil class'a aittir.
- Gizli global state yerine açık ownership ve açık parametreler tercih edilir.

## Yaygın Hatalar

- Unscoped `enum` değerleriyle isim çakışması oluşturmak.
- Class veya parametre daha netken global state kullanmak.
- `const` object state ile compile-time constant kavramını karıştırmak.

## Örnek

- `scope_enum_static.cpp`: scope, scoped enum ve class-level state gösterir.

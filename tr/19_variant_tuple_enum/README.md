# Variant, Tuple Ve Enum

Bazı veriler birkaç bilinen alternatiften biri olabilir. C++17, type-safe
alternatifler için `std::variant`, sabit değer grupları için `std::tuple` verir.

## Mental Model

- `enum class`, kapalı bir state seti isimlendirir.
- `std::variant<A, B>`, listelenen tiplerden tam olarak birini saklar.
- `std::visit`, aktif variant alternatifini işler.
- `std::tuple`, küçük ve sabit değer gruplarını saklar.
- Field isimleri önemliyse tuple yerine named struct tercih edilir.

## Yaygın Hatalar

- Alternatif modellemek için gereksiz inheritance kullanmak.
- Field isimleri gerekirken tuple ile okunabilirliği düşürmek.
- Variant alternatiflerinden birini handle etmeyi unutmak.

## Örnek

- `variant_tuple_enum.cpp`: mesajları bilinen alternatifler olarak modeller.

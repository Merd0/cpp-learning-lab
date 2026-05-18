# Operator Overloading

Operator overloading, value type'ların doğal kullanılmasını sağlar. Pahalı iş
veya beklenmedik side effect saklamak için kullanılmamalıdır.

## Mental Model

- Money, vector, id gibi value type'larda operator mantıklıdır.
- Operator davranışı normal beklentiyle uyumlu olmalıdır.
- Domain-specific işler için named function daha okunabilir olabilir.
- Gerekliyse önce compound assignment yazılır, binary operator ondan türetilir.

## Yaygın Hatalar

- Sadece havalı syntax için operator overload etmek.
- `operator+` içinde sol objeyi değiştirmek.
- `const` correctness unutmak.

## Örnek

- `value_type_operator.cpp`: küçük bir `Money` value type'ı uygular.

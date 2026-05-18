# Pattern Ve Architecture

Pattern'lar gerçek bir tasarım baskısını isimlendirdiğinde faydalıdır. Problem
oluşmadan eklenirse kodu gereksiz karmaşıklaştırır.

## Mental Model

- Önce basit fonksiyon ve composition tercih edilir.
- Davranış değiştirilebilir olmalıysa Strategy kullanılabilir.
- Nesne oluşturma varyasyonları artıyorsa Factory düşünülür.
- Interface küçük ve stabil tutulmalıdır.

## Örnek

- `strategy_pattern.cpp`: checkout logic içine tek discount kuralı gömmek
  yerine pricing strategy kullanır.

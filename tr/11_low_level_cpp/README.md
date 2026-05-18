# Low-Level C++

C++ düşük seviye veriyi modelleyebilir ve bunu daha güvenli abstractionlarla
birlikte yapabilir. Önemli olan byte, alignment, flag ve object lifetime
konularının nerede kritik olduğunu bilmektir.

## Mental Model

- `sizeof(T)` nesnenin kaç byte yer kapladığını gösterir.
- `alignof(T)` nesnenin alignment ihtiyacını gösterir.
- `std::byte`, raw byte temsil eder ama karakter gibi davranmaz.
- Bit flag'ler birden fazla boolean durumu kompakt saklar.
- Low-level kodun sınırları net olmalı ve test edilmelidir.

## Örnek

- `bytes_alignment_flags.cpp`: byte değerleri, alignment ve bit flag gösterir.

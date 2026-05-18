#include <array>
#include <cstddef>
#include <cstdint>
#include <iostream>

struct PacketHeader {
    std::uint16_t type;
    std::uint16_t length;
};

constexpr unsigned readFlag = 1U << 0U;
constexpr unsigned writeFlag = 1U << 1U;
constexpr unsigned executeFlag = 1U << 2U;

bool hasFlag(const unsigned flags, const unsigned flag) noexcept {
    return (flags & flag) != 0U;
}

int main() {
    const PacketHeader header{7, 128};
    const unsigned permissions = readFlag | writeFlag;
    const std::array<std::byte, 4> bytes{
        std::byte{0xDE},
        std::byte{0xAD},
        std::byte{0xBE},
        std::byte{0xEF},
    };

    std::cout << "header boyutu: " << sizeof(header) << '\n';
    std::cout << "header alignment: " << alignof(PacketHeader) << '\n';
    std::cout << "okuma izni: " << std::boolalpha << hasFlag(permissions, readFlag) << '\n';
    std::cout << "execute izni: " << hasFlag(permissions, executeFlag) << '\n';
    std::cout << "ilk byte: " << std::to_integer<int>(bytes.front()) << '\n';

    return 0;
}

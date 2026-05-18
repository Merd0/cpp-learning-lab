#include <array>
#include <iostream>

constexpr int square(const int value) noexcept {
    return value * value;
}

constexpr std::array<int, 5> makeSquares() {
    return {square(0), square(1), square(2), square(3), square(4)};
}

int main() {
    constexpr auto squares = makeSquares();
    static_assert(squares[4] == 16, "square table hatalı");

    for (const int value : squares) {
        std::cout << value << '\n';
    }

    return 0;
}

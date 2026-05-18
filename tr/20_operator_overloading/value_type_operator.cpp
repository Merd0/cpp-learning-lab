#include <iostream>
#include <string>

class Money {
public:
    explicit Money(int cents) : cents_{cents} {}

    int cents() const noexcept {
        return cents_;
    }

    Money& operator+=(const Money other) noexcept {
        cents_ += other.cents_;
        return *this;
    }

private:
    int cents_;
};

Money operator+(Money lhs, const Money rhs) noexcept {
    lhs += rhs;
    return lhs;
}

bool operator==(const Money lhs, const Money rhs) noexcept {
    return lhs.cents() == rhs.cents();
}

std::ostream& operator<<(std::ostream& output, const Money money) {
    return output << money.cents() / 100 << "." << money.cents() % 100;
}

int main() {
    const Money salary{125'000};
    const Money bonus{25'000};
    const Money total = salary + bonus;

    std::cout << "toplam: " << total << '\n';
    std::cout << "beklenenle aynı: " << std::boolalpha << (total == Money{150'000}) << '\n';
    return 0;
}

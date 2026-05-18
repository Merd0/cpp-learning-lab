#include <array>
#include <iostream>
#include <string>

int main() {
    const int itemCount{3};
    const double unitPrice{19.99};
    const bool isActive{true};
    const std::string label{"starter kit"};
    const std::array<int, 3> scores{80, 90, 100};

    const auto totalPrice = static_cast<double>(itemCount) * unitPrice;

    std::cout << "label: " << label << '\n';
    std::cout << "active: " << std::boolalpha << isActive << '\n';
    std::cout << "total price: " << totalPrice << '\n';
    std::cout << "last score: " << scores.back() << '\n';

    return 0;
}

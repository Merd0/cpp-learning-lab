#include <iostream>
#include <string>

void applyDiscount(double& price, const double percent) {
    price -= price * percent;
}

void printReceipt(const std::string& productName, const double price) {
    std::cout << productName << ": " << price << '\n';
}

double addTax(const double price, const double taxRate) noexcept {
    return price + (price * taxRate);
}

int main() {
    std::string productName{"mechanical keyboard"};
    double price{120.0};

    applyDiscount(price, 0.10);
    const double finalPrice = addTax(price, 0.20);

    printReceipt(productName, finalPrice);
    return 0;
}

#include <iostream>
#include <memory>
#include <utility>

class DiscountStrategy {
public:
    virtual ~DiscountStrategy() = default;
    virtual double apply(double price) const = 0;
};

class NoDiscount final : public DiscountStrategy {
public:
    double apply(const double price) const override {
        return price;
    }
};

class StudentDiscount final : public DiscountStrategy {
public:
    double apply(const double price) const override {
        return price * 0.85;
    }
};

class Checkout {
public:
    explicit Checkout(std::unique_ptr<DiscountStrategy> strategy)
        : strategy_{std::move(strategy)} {}

    double finalPrice(const double price) const {
        return strategy_->apply(price);
    }

private:
    std::unique_ptr<DiscountStrategy> strategy_;
};

int main() {
    Checkout checkout{std::make_unique<StudentDiscount>()};
    std::cout << "son fiyat: " << checkout.finalPrice(200.0) << '\n';

    return 0;
}

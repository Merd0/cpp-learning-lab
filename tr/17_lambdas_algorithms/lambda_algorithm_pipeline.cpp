#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

struct Order {
    std::string customer;
    double total;
};

int main() {
    std::vector<Order> orders{
        {"Ada", 120.0},
        {"Bjarne", 80.0},
        {"Grace", 210.0},
    };

    const double minimum = 100.0;
    const auto isLargeOrder = [minimum](const Order& order) {
        return order.total >= minimum;
    };

    std::vector<double> largeTotals;
    for (const auto& order : orders) {
        if (isLargeOrder(order)) {
            largeTotals.push_back(order.total);
        }
    }

    std::transform(largeTotals.begin(), largeTotals.end(), largeTotals.begin(), [](double total) {
        return total * 1.20;
    });

    const double sum = std::accumulate(largeTotals.begin(), largeTotals.end(), 0.0);

    std::cout << "büyük sipariş sayısı: " << largeTotals.size() << '\n';
    std::cout << "vergili toplam: " << sum << '\n';
    return 0;
}

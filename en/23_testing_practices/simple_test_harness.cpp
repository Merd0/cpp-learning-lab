#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

int clamp(const int value, const int low, const int high) {
    if (low > high) {
        throw std::invalid_argument{"low cannot be greater than high"};
    }
    if (value < low) {
        return low;
    }
    if (value > high) {
        return high;
    }
    return value;
}

void require(const bool condition, const std::string& message) {
    if (!condition) {
        throw std::runtime_error{message};
    }
}

int main() {
    const std::vector<std::pair<std::string, void (*)()>> tests{
        {"value inside range", []() { require(clamp(5, 1, 10) == 5, "inside range failed"); }},
        {"value below range", []() { require(clamp(-1, 1, 10) == 1, "below range failed"); }},
        {"value above range", []() { require(clamp(99, 1, 10) == 10, "above range failed"); }},
    };

    for (const auto& test : tests) {
        test.second();
        std::cout << "passed: " << test.first << '\n';
    }

    return 0;
}

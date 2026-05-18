#include <chrono>
#include <filesystem>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    const std::filesystem::path base{"build"};
    const std::filesystem::path report = base / "report.txt";

    const auto start = std::chrono::steady_clock::now();
    const std::vector<int> values{1, 2, 3, 4, 5};
    const int sum = std::accumulate(values.begin(), values.end(), 0);
    const auto end = std::chrono::steady_clock::now();

    const auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "report path: " << report.string() << '\n';
    std::cout << "sum: " << sum << '\n';
    std::cout << "elapsed microseconds: " << elapsed.count() << '\n';
    return 0;
}

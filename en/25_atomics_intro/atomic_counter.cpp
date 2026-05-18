#include <atomic>
#include <cstddef>
#include <iostream>
#include <thread>
#include <vector>

int main() {
    std::atomic<int> counter{0};
    constexpr int threadCount = 4;
    constexpr int incrementsPerThread = 1'000;

    std::vector<std::thread> workers;
    workers.reserve(static_cast<std::size_t>(threadCount));

    for (int i = 0; i < threadCount; ++i) {
        workers.emplace_back([&counter]() {
            for (int step = 0; step < incrementsPerThread; ++step) {
                ++counter;
            }
        });
    }

    for (auto& worker : workers) {
        worker.join();
    }

    std::cout << "counter: " << counter.load() << '\n';
    return 0;
}

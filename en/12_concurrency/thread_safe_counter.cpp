#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

class Counter {
public:
    void increment() {
        const std::lock_guard<std::mutex> lock{mutex_};
        ++value_;
    }

    int value() const {
        const std::lock_guard<std::mutex> lock{mutex_};
        return value_;
    }

private:
    mutable std::mutex mutex_;
    int value_{0};
};

int main() {
    Counter counter;
    constexpr int threadCount = 4;
    constexpr int incrementsPerThread = 1'000;

    std::vector<std::thread> workers;
    workers.reserve(static_cast<std::size_t>(threadCount));

    for (int i = 0; i < threadCount; ++i) {
        workers.emplace_back([&counter]() {
            for (int step = 0; step < incrementsPerThread; ++step) {
                counter.increment();
            }
        });
    }

    for (auto& worker : workers) {
        worker.join();
    }

    std::cout << "counter: " << counter.value() << '\n';
    return 0;
}

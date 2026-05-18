#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>

class Buffer {
public:
    explicit Buffer(std::vector<int> data) : data_{std::move(data)} {}

    std::size_t size() const noexcept {
        return data_.size();
    }

    int firstOrZero() const noexcept {
        return data_.empty() ? 0 : data_.front();
    }

private:
    std::vector<int> data_;
};

Buffer makeBuffer() {
    return Buffer{std::vector<int>{10, 20, 30, 40}};
}

int main() {
    Buffer original = makeBuffer();
    Buffer moved = std::move(original);

    std::cout << "tasınan boyut: " << moved.size() << '\n';
    std::cout << "tasınan ilk değer: " << moved.firstOrZero() << '\n';

    return 0;
}

#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

class User {
public:
    User(std::string name, int age) : name_{std::move(name)}, age_{age} {
        if (name_.empty()) {
            throw std::invalid_argument{"name boş olamaz"};
        }
        if (age_ < 0) {
            throw std::invalid_argument{"age negatif olamaz"};
        }
    }

    const std::string& name() const noexcept {
        return name_;
    }

    int age() const noexcept {
        return age_;
    }

    void celebrateBirthday() noexcept {
        ++age_;
    }

private:
    std::string name_;
    int age_;
};

int main() {
    User user{"Ada", 36};
    user.celebrateBirthday();

    std::cout << user.name() << " yaşı: " << user.age() << '\n';
    return 0;
}

#include <iostream>
#include <memory>
#include <string>
#include <utility>

class Sensor {
public:
    Sensor(std::string name, int value) : name_{std::move(name)}, value_{value} {}

    const std::string& name() const noexcept {
        return name_;
    }

    int read() const noexcept {
        return value_;
    }

private:
    std::string name_;
    int value_;
};

class Dashboard {
public:
    explicit Dashboard(std::weak_ptr<Sensor> sensor) : sensor_{std::move(sensor)} {}

    void print() const {
        if (const auto sensor = sensor_.lock()) {
            std::cout << sensor->name() << ": " << sensor->read() << '\n';
        } else {
            std::cout << "sensor is no longer available\n";
        }
    }

private:
    std::weak_ptr<Sensor> sensor_;
};

int main() {
    auto uniqueSensor = std::make_unique<Sensor>("temperature", 24);
    std::cout << uniqueSensor->name() << ": " << uniqueSensor->read() << '\n';

    auto sharedSensor = std::make_shared<Sensor>("pressure", 101);
    Dashboard dashboard{sharedSensor};

    dashboard.print();
    sharedSensor.reset();
    dashboard.print();

    return 0;
}

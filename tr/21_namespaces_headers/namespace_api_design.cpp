#include <iostream>
#include <string>
#include <utility>

namespace telemetry {
class Reading {
public:
    Reading(std::string name, double value) : name_{std::move(name)}, value_{value} {}

    const std::string& name() const noexcept {
        return name_;
    }

    double value() const noexcept {
        return value_;
    }

private:
    std::string name_;
    double value_;
};

std::string format(const Reading& reading) {
    return reading.name() + "=" + std::to_string(reading.value());
}
} // namespace telemetry

int main() {
    const telemetry::Reading reading{"temperature", 24.5};
    std::cout << telemetry::format(reading) << '\n';

    return 0;
}

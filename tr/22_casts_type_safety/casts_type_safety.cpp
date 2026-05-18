#include <iostream>
#include <memory>

class Device {
public:
    virtual ~Device() = default;
};

class SensorDevice final : public Device {
public:
    int sample() const noexcept {
        return 42;
    }
};

int main() {
    const double rawValue = 42.9;
    const int roundedDown = static_cast<int>(rawValue);
    std::cout << "aşağı yuvarlandı: " << roundedDown << '\n';

    std::unique_ptr<Device> device = std::make_unique<SensorDevice>();
    if (const auto* sensor = dynamic_cast<const SensorDevice*>(device.get())) {
        std::cout << "sample: " << sensor->sample() << '\n';
    }

    return 0;
}

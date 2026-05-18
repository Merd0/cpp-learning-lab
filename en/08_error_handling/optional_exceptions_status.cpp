#include <iostream>
#include <optional>
#include <stdexcept>
#include <string>

std::optional<int> parsePort(const std::string& text) {
    try {
        const int value = std::stoi(text);
        if (value < 1 || value > 65'535) {
            return std::nullopt;
        }
        return value;
    } catch (const std::exception&) {
        return std::nullopt;
    }
}

class Config {
public:
    explicit Config(int port) : port_{port} {
        if (port_ < 1 || port_ > 65'535) {
            throw std::invalid_argument{"port is outside the valid range"};
        }
    }

    int port() const noexcept {
        return port_;
    }

private:
    int port_;
};

enum class SaveStatus {
    ok,
    validationFailed,
};

SaveStatus validateBeforeSave(const Config& config) noexcept {
    return config.port() > 0 ? SaveStatus::ok : SaveStatus::validationFailed;
}

int main() {
    const auto parsed = parsePort("8080");
    if (!parsed.has_value()) {
        std::cout << "invalid port\n";
        return 1;
    }

    const Config config{*parsed};
    const SaveStatus status = validateBeforeSave(config);

    std::cout << "port: " << config.port() << '\n';
    std::cout << "save allowed: " << std::boolalpha << (status == SaveStatus::ok) << '\n';

    return 0;
}

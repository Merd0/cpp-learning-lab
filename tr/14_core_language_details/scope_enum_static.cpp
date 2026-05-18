#include <iostream>
#include <string>

enum class LogLevel {
    info,
    warning,
    error,
};

std::string toString(const LogLevel level) {
    switch (level) {
    case LogLevel::info:
        return "info";
    case LogLevel::warning:
        return "warning";
    case LogLevel::error:
        return "error";
    }

    return "unknown";
}

class Logger {
public:
    explicit Logger(LogLevel minimumLevel) : minimumLevel_{minimumLevel} {
        ++createdCount_;
    }

    void print(LogLevel level, const std::string& message) const {
        if (static_cast<int>(level) >= static_cast<int>(minimumLevel_)) {
            std::cout << "[" << toString(level) << "] " << message << '\n';
        }
    }

    static int createdCount() noexcept {
        return createdCount_;
    }

private:
    LogLevel minimumLevel_;
    static int createdCount_;
};

int Logger::createdCount_ = 0;

int main() {
    Logger logger{LogLevel::warning};
    logger.print(LogLevel::info, "gizli");
    logger.print(LogLevel::error, "görünür");

    std::cout << "logger sayısı: " << Logger::createdCount() << '\n';
    return 0;
}

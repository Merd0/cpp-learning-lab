#include <iostream>
#include <string>
#include <tuple>
#include <variant>

struct LoginEvent {
    std::string user;
};

struct ErrorEvent {
    int code;
    std::string message;
};

using Event = std::variant<LoginEvent, ErrorEvent>;

struct EventPrinter {
    void operator()(const LoginEvent& event) const {
        std::cout << "login: " << event.user << '\n';
    }

    void operator()(const ErrorEvent& event) const {
        std::cout << "error " << event.code << ": " << event.message << '\n';
    }
};

int main() {
    const Event event = ErrorEvent{404, "not found"};
    std::visit(EventPrinter{}, event);

    const std::tuple<int, std::string> summary{1, "processed"};
    std::cout << std::get<0>(summary) << " -> " << std::get<1>(summary) << '\n';

    return 0;
}

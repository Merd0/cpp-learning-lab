#include <iostream>
#include <memory>
#include <string>
#include <utility>

class Connection {
public:
    explicit Connection(std::string endpoint) : endpoint_{std::move(endpoint)} {
        std::cout << "connection açıldı: " << endpoint_ << '\n';
    }

    ~Connection() {
        std::cout << "connection kapandı: " << endpoint_ << '\n';
    }

    void send(const std::string& message) const {
        std::cout << endpoint_ << " adresine gönder: " << message << '\n';
    }

private:
    std::string endpoint_;
};

int main() {
    auto connection = std::make_unique<Connection>("local-service");
    connection->send("health-check");

    auto owner = std::move(connection);
    if (connection == nullptr) {
        std::cout << "ownership taşındı\n";
    }

    owner->send("shutdown");
    return 0;
}

#include <iostream>
#include <string>

class Notification {
public:
    virtual ~Notification() = default;

    virtual std::string channel() const {
        return "generic";
    }
};

class EmailNotification final : public Notification {
public:
    std::string channel() const override {
        return "email";
    }
};

void printByValue(Notification notification) {
    std::cout << "by value: " << notification.channel() << '\n';
}

void printByReference(const Notification& notification) {
    std::cout << "by reference: " << notification.channel() << '\n';
}

int main() {
    EmailNotification email;

    printByValue(email);
    printByReference(email);

    return 0;
}

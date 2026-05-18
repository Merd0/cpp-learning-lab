#pragma once

#include <string>
#include <string_view>

class BankAccount {
public:
    BankAccount(std::string owner, int openingBalanceCents);

    const std::string& owner() const noexcept;
    int balanceCents() const noexcept;

    void deposit(int cents);
    bool withdraw(int cents);

private:
    static void requirePositiveAmount(int cents, std::string_view operation);

    std::string owner_;
    int balanceCents_;
};

std::string formatCents(int cents);

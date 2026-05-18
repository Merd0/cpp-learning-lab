#include "bank_account.h"

#include <stdexcept>
#include <utility>

BankAccount::BankAccount(std::string owner, const int openingBalanceCents)
    : owner_{std::move(owner)}, balanceCents_{openingBalanceCents} {
    if (owner_.empty()) {
        throw std::invalid_argument{"owner boş olamaz"};
    }
    if (openingBalanceCents < 0) {
        throw std::invalid_argument{"açılış bakiyesi negatif olamaz"};
    }
}

const std::string& BankAccount::owner() const noexcept {
    return owner_;
}

int BankAccount::balanceCents() const noexcept {
    return balanceCents_;
}

void BankAccount::deposit(const int cents) {
    requirePositiveAmount(cents, "deposit");
    balanceCents_ += cents;
}

bool BankAccount::withdraw(const int cents) {
    requirePositiveAmount(cents, "withdraw");
    if (cents > balanceCents_) {
        return false;
    }

    balanceCents_ -= cents;
    return true;
}

void BankAccount::requirePositiveAmount(const int cents, const std::string_view operation) {
    if (cents <= 0) {
        throw std::invalid_argument{std::string{operation} + " tutarı pozitif olmalı"};
    }
}

std::string formatCents(const int cents) {
    const int lira = cents / 100;
    const int kurus = cents % 100;

    std::string result = std::to_string(lira) + ".";
    if (kurus < 10) {
        result += "0";
    }
    result += std::to_string(kurus);
    return result;
}

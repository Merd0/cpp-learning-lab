#include "bank_account.h"

#include <stdexcept>
#include <string>

void require(const bool condition) {
    if (!condition) {
        throw std::runtime_error{"test failed"};
    }
}

void testDepositIncreasesBalance() {
    BankAccount account{"Ada", 1'000};
    account.deposit(500);

    require(account.balanceCents() == 1'500);
}

void testWithdrawReturnsFalseWhenBalanceIsInsufficient() {
    BankAccount account{"Ada", 1'000};

    const bool result = account.withdraw(2'000);

    require(!result);
    require(account.balanceCents() == 1'000);
}

void testInvalidOwnerThrows() {
    bool thrown = false;

    try {
        BankAccount account{"", 100};
        (void)account;
    } catch (const std::invalid_argument&) {
        thrown = true;
    }

    require(thrown);
}

void testFormatCentsPadsSmallKurusValues() {
    require(formatCents(1'005) == "10.05");
}

int main() {
    testDepositIncreasesBalance();
    testWithdrawReturnsFalseWhenBalanceIsInsufficient();
    testInvalidOwnerThrows();
    testFormatCentsPadsSmallKurusValues();

    return 0;
}

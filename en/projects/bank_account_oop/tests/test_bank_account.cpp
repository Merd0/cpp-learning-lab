#include "bank_account.h"

#include <cassert>
#include <stdexcept>
#include <string>

void testDepositIncreasesBalance() {
    BankAccount account{"Ada", 1'000};
    account.deposit(500);

    assert(account.balanceCents() == 1'500);
}

void testWithdrawReturnsFalseWhenBalanceIsInsufficient() {
    BankAccount account{"Ada", 1'000};

    const bool result = account.withdraw(2'000);

    assert(!result);
    assert(account.balanceCents() == 1'000);
}

void testInvalidOwnerThrows() {
    bool thrown = false;

    try {
        BankAccount account{"", 100};
        (void)account;
    } catch (const std::invalid_argument&) {
        thrown = true;
    }

    assert(thrown);
}

void testFormatCentsPadsSmallKurusValues() {
    assert(formatCents(1'005) == "10.05");
}

int main() {
    testDepositIncreasesBalance();
    testWithdrawReturnsFalseWhenBalanceIsInsufficient();
    testInvalidOwnerThrows();
    testFormatCentsPadsSmallKurusValues();

    return 0;
}

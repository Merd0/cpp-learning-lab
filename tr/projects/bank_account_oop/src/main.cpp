#include "bank_account.h"

#include <iostream>

int main() {
    BankAccount account{"Ada Lovelace", 10'000};

    account.deposit(2'500);
    const bool withdrawn = account.withdraw(3'000);

    std::cout << "hesap sahibi: " << account.owner() << '\n';
    std::cout << "para çekildi mi: " << std::boolalpha << withdrawn << '\n';
    std::cout << "bakiye: " << formatCents(account.balanceCents()) << '\n';

    return 0;
}

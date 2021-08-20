#include <iostream>
#include "SavingAccount.h"

SavingAccount::SavingAccount(std::string SavAccName, double SavAccSaldo, double IntRate)
    :Account{SavAccName, SavAccSaldo}, IntRate{IntRate} {}

bool SavingAccount::Deposit(double Amount){
    Amount += Amount*(IntRate/100);
    return Account::Deposit(Amount);
}

std::ostream &operator<<(std::ostream &os, const SavingAccount SavingAccount){
    os << "[Saving Account: " << SavingAccount.Name << ": " << SavingAccount.Saldo << ", " << SavingAccount.IntRate << "%]";
    return os;
}
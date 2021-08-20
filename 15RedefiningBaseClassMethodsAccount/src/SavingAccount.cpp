#include <iostream>
#include "SavingAccount.h"

SavingAccount::SavingAccount()
    :SavingAccount(0.0, 0.0) {}

SavingAccount::SavingAccount(double StartBalance, double IntRate)
    :Account (StartBalance), IntRate {IntRate}{
    }

void SavingAccount::deposit(double amount){
    amount = amount + (amount * IntRate/100);
    Account::deposit(amount);
}

std::ostream &operator<< (std::ostream &os, const SavingAccount &rhs){
    os << "SavingAccount balance: " << rhs.balance << " with int. rate: " << rhs.IntRate;
    return os;
}
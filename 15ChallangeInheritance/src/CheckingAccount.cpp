#include <iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string ChckAccName, double ChckAccSaldo) 
    :Account{ChckAccName, ChckAccSaldo} {}

bool CheckingAccount::Withdraw(double Amount){
    Amount += Amount + WithdrawFee;
    return Account::Withdraw(Amount);
}

CheckingAccount operator-=(CheckingAccount &Acc, double amount){
    Acc.Withdraw(amount);
    return Acc;
}

std::ostream &operator<<(std::ostream &os, const CheckingAccount &CheckingAccount){
    os << "[CheckingAccount: " << CheckingAccount.Name << ": " << CheckingAccount.Saldo << "]";
    return os;
}

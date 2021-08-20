#include <iostream>
#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string TrstAccName, double TrstAccSaldo, double TrstIntRate)
    :SavingAccount{TrstAccName, TrstAccSaldo, TrstIntRate}, WithdrawCounter{0}{}

bool TrustAccount::Deposit(double Amount){
    if (Amount >= Threshold)
        Amount += DepositBonus;
    return SavingAccount::Deposit(Amount);
}

bool TrustAccount::Withdraw(double Amount){
    if (WithdrawCounter < MaxWithdrawsNumber && Amount < MaxWithdrawPercent*Saldo){
        WithdrawCounter++;
        return SavingAccount::Withdraw(Amount);
    } else {
        std::cout << "Withdraw impossible" << std::endl;
        return false;
    }
}

TrustAccount operator-=(TrustAccount &Acc, double amount){
    Acc.Withdraw(amount);
    return Acc;
}

TrustAccount operator+=(TrustAccount &Acc, double amount){
    Acc.Deposit(amount);
    return Acc;
}

std::ostream &operator<<(std::ostream &os, const TrustAccount TrustAccount){
    os << "[Trust Account: " << TrustAccount.Name << ": " << TrustAccount.Saldo << ", " << TrustAccount.IntRate << "%, " << TrustAccount.WithdrawCounter << "]";
    return os;
}
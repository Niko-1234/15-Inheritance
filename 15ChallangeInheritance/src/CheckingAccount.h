#ifndef _CHECKINGACCOUNT_H_
#define _CHECKINGACCOUNT_H_
#include "Account.h"

class  CheckingAccount: public Account{
    friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &Account);
    friend CheckingAccount operator-=(CheckingAccount &Acc, double amount);
private:
    static constexpr const char *DefName = "CheckAccount";
    static constexpr double DefSaldo = 0.0;
    static constexpr double WithdrawFee = 1.50;
protected:
public:
    CheckingAccount(std::string ChckAccName = DefName, double ChckAccSaldo = DefSaldo);
    bool Withdraw(double Amount);
};

#endif // _CHECKINGACCOUNT_H_
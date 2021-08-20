#ifndef _SAVINGACCOUNT_H_
#define _SAVINGACCOUNT_H_
#include "Account.h"

class SavingAccount: public Account {
    friend std::ostream &operator<< (std::ostream &os, const SavingAccount &rhs);
protected:
    double IntRate;
public:
    SavingAccount();
    SavingAccount(double StartBalance, double IntRate);
    void deposit(double amount);
};

#endif // _SAVINGACCOUNT_H_
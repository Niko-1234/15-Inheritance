#ifndef _SAVINGACCOUNT_H_
#define _SAVINGACCOUNT_H_
#include "Account.h"

class SavingAccount: public Account{
    friend std::ostream &operator<<(std::ostream &os, const SavingAccount SavingAccount);
private:
    static constexpr const char *DefSavAccName = "SavNone";
    static constexpr double DefSavAccSaldo = 0.0;
    static constexpr double DefIntRate = 0.0;
protected:
    double IntRate;
public:
    SavingAccount (std::string SavAccName = DefSavAccName, double SavAccSaldo = DefSavAccSaldo, double IntRate = DefIntRate);
    bool Deposit (double Amount);
};

#endif // _SAVINGACCOUNT_H_
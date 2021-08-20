#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_
#include "SavingAccount.h"

class  TrustAccount: public SavingAccount{
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount SavingAccount);
    friend TrustAccount operator-=(TrustAccount &Acc, double amount);
    friend TrustAccount operator+=(TrustAccount &Acc, double amount);
private:
    static constexpr const char *DefName = "TrustNone";
    static constexpr double DefSaldo = 0.0;
    static constexpr double DefIntRate = 0.0;
    static constexpr double DefThreshold = 5000.0;
    static constexpr int MaxWithdrawsNumber = 3;
    static constexpr double MaxWithdrawPercent = 0.2;
    static constexpr double DepositBonus = 50.0;
protected:
    int WithdrawCounter;
    double Threshold = DefThreshold;
public:
    TrustAccount(std::string TrstAccName = DefName, double TrstAccSaldo = DefSaldo, double TrstIntRate = DefIntRate);
    bool Deposit(double Amount);
    bool Withdraw(double Amount);
};

#endif // _TRUSTACCOUNT_H_
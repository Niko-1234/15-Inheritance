#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class  Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &Account);
    friend Account operator+=(Account &Acc, double amount);
    friend Account operator-=(Account &Acc, double amount);
private:
    static constexpr const char *DefName = "None";
    static constexpr double DefSaldo = 0.0;
protected:
    std::string Name;
    double Saldo;
public:
    Account(std::string AccName = DefName, double AccSaldo = DefSaldo);
    bool Deposit(double Amount);
    bool Withdraw(double Amount);
    double GetBalance() const;
};

#endif // _ACCOUNT_H_
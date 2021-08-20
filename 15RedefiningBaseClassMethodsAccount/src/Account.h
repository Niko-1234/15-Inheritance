#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class  Account
{
    friend std::ostream &operator<< (std::ostream &os, const Account &rhs);
protected:
    double balance;
public:
    Account();
    Account(double StartBalance);
    ~Account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // _ACCOUNT_H_
#include <iostream>
#include "Account.h"

Account::Account()
    :Account (0.0){}
Account::Account(double StartBalance) 
    :balance (StartBalance){}

Account::~Account(){
}

void Account::deposit(double amount){
    balance += amount;
}

void Account::withdraw(double amount){
    if (balance >= 0.0)
        balance -= amount;
    else
        std::cout << "Not enouhg money" << std::endl;   
}

std::ostream &operator<<(std::ostream &os, const Account &rhs){
    os << "Account balance: " << rhs.balance;
    return os;
}

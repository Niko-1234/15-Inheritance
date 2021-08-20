#include <iostream>
#include "Account.h"

Account::Account()
    :balance {0.0}, name {"Rachunek Biezacy"}{
}

Account::~Account(){
}

void Account::deposit(double amount){
    std::cout << "account deposit called with: " << amount << std::endl;
}

void Account::withdraw(double amount){
    std::cout << "account withdrow called with: " << amount << std::endl;
}

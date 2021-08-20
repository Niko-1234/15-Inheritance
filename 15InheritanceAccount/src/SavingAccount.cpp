#include <iostream>
#include "SavingAccount.h"

SavingAccount::SavingAccount()
    :IntRate{3.0} {
}

SavingAccount::~SavingAccount(){
}

void SavingAccount::deposit(double amount){
    std::cout << "Saving account deposit called with: " << amount << std::endl;
}

void SavingAccount::withdraw(double amount){
    std::cout << "Saving account withdraw called with: " << amount << std::endl;
}
#include <iostream>
#include "AccountUtil.h"

//Function for Accounts
void display(const std::vector <Account> &Accounts){
    std::cout << "\n===============Accounts================" << std::endl;
    for (const auto &acc: Accounts){
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector <Account> &Accounts, double Amount){
    std::cout << "\n===============Depositing to Accounts============" << std::endl;
    for (auto &acc: Accounts){
        if(acc.Deposit(Amount))
            std::cout << "Deposited " << Amount << " to " << acc << std::endl;
        else 
            std::cout << "Failed Deposit of " << Amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector <Account> &Accounts, double Amount){
    std::cout << "\n===============Withdrawing from Accounts============" << std::endl;
    for (auto &acc: Accounts){
        if(acc.Withdraw(Amount))
            std::cout << "Withdrew " << Amount << " from " << acc << std::endl;
        else 
            std::cout << "Failed Withdraw of " << Amount << " from " << acc << std::endl;
    }
}
//Function for Saving Accounts
void display(const std::vector <SavingAccount> &SavAccounts){
    std::cout << "\n===============SavingAccounts================" << std::endl;
    for (const auto &acc: SavAccounts){
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector <SavingAccount> &SavAccounts, double Amount){
    std::cout << "\n===============Depositing to Saving Accounts============" << std::endl;
    for (auto &acc: SavAccounts){
        if(acc.Deposit(Amount))
            std::cout << "Deposited " << Amount << " to " << acc << std::endl;
        else 
            std::cout << "Failed Deposit of " << Amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector <SavingAccount> &SavAccounts, double Amount){
    std::cout << "\n===============Withdrawing from Saving Accounts============" << std::endl;
    for (auto &acc: SavAccounts){
        if(acc.Withdraw(Amount))
            std::cout << "Withdrew " << Amount << " from " << acc << std::endl;
        else 
            std::cout << "Failed Withdraw of " << Amount << " from " << acc << std::endl;
    }
}
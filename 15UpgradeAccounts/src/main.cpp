#include <iostream>
#include <vector>
#include "SavingAccount.h"
#include "AccountUtil.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    //Accounts
    vector <Account> Accounts;
    Accounts.push_back(Account {});
    Accounts.push_back(Account {"Larry"});
    Accounts.push_back(Account {"Moe", 2000});
    Accounts.push_back(Account {"Curly", 5000});

    display(Accounts);
    deposit(Accounts, 1000);
    withdraw(Accounts, 2000);

    //Saving Accounts
    vector <SavingAccount> SavAccounts;
    SavAccounts.push_back(SavingAccount {});
    SavAccounts.push_back(SavingAccount {"Larry"});
    SavAccounts.push_back(SavingAccount {"Moe", 2000});
    SavAccounts.push_back(SavingAccount {"Curly", 5000, 10});

    display(SavAccounts);
    deposit(SavAccounts, 1000);
    withdraw(SavAccounts, 2000);
}
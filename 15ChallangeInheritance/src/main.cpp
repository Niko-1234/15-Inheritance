#include <iostream>
#include <vector>
#include "SavingAccount.h"
#include "AccountUtil.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    //Checking Accounts
    vector <CheckingAccount> ChckAccounts;
    ChckAccounts.push_back(CheckingAccount {});
    ChckAccounts.push_back(CheckingAccount {"Larry"});
    ChckAccounts.push_back(CheckingAccount {"Moe", 2000});
    ChckAccounts.push_back(CheckingAccount {"Curly", 5000});

    display(ChckAccounts);
    deposit(ChckAccounts, 1000);
    withdraw(ChckAccounts, 2000);

    //TRust Accounts
    vector <TrustAccount> TrstAccounts;
    TrstAccounts.push_back(TrustAccount {});
    TrstAccounts.push_back(TrustAccount {"Larry"});
    TrstAccounts.push_back(TrustAccount {"Moe", 2000});
    TrstAccounts.push_back(TrustAccount {"Curly", 5000, 10});

    display(TrstAccounts);
    deposit(TrstAccounts, 1000);
    withdraw(TrstAccounts, 500);
    withdraw(TrstAccounts, 150);
    withdraw(TrstAccounts, 150);
    withdraw(TrstAccounts, 150);
}
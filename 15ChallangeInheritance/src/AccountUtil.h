#ifndef _ACCOUNTUTIL_H_
#define _ACCOUNTUTIL_H_
#include <vector>
#include "TrustAccount.h"
#include "CheckingAccount.h"

void display(const std::vector <Account> &Accounts);
void deposit(std::vector <Account> &Accounts, double Amount);
void withdraw(std::vector <Account> &Accounts, double Amount);

void display(const std::vector <SavingAccount> &SavAccounts);
void deposit(std::vector <SavingAccount> &SavAccounts, double Amount);
void withdraw(std::vector <SavingAccount> &SavAccounts, double Amount);

void display(const std::vector <CheckingAccount> &ChckAccounts);
void deposit(std::vector <CheckingAccount> &ChckAccounts, double Amount);
void withdraw(std::vector <CheckingAccount> &ChckAccounts, double Amount);

void display(const std::vector <TrustAccount> &TrstAccounts);
void deposit(std::vector <TrustAccount> &TrstAccounts, double Amount);
void withdraw(std::vector <TrustAccount> &TrstAccounts, double Amount);

#endif //_ACCOUNTUTIL_H_
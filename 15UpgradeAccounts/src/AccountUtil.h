#ifndef _ACCOUNTUTIL_H_
#define _ACCOUNTUTIL_H_
#include <vector>
#include "SavingAccount.h"

void display(const std::vector <Account> &Accounts);
void deposit(std::vector <Account> &Accounts, double Amount);
void withdraw(std::vector <Account> &Accounts, double Amount);

void display(const std::vector <SavingAccount> &SavAccounts);
void deposit(std::vector <SavingAccount> &SavAccounts, double Amount);
void withdraw(std::vector <SavingAccount> &SavAccounts, double Amount);
#endif //_ACCOUNTUTIL_H_
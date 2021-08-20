#include <iostream>
#include "Account.h"
#include "SavingAccount.h"

using namespace std;

int main() {
    cout << "=======Account=========" << endl;
    Account Acc {};
    Acc.deposit(100);
    Acc.withdraw(200);
    cout << endl;

    Account *AccPtr {nullptr};
    AccPtr->deposit(100);
    AccPtr->withdraw(200);
    delete AccPtr;
    cout << endl;

    cout << "=======SavingAccount=========" << endl;
    SavingAccount SavAcc {};
    SavAcc.deposit(100);
    SavAcc.withdraw(200);
    cout << endl;
    
    SavingAccount *SavAccPtr {nullptr};
    SavAccPtr->deposit(100);
    SavAccPtr->withdraw(200);
    delete SavAccPtr;
}
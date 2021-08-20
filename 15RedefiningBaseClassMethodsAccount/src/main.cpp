#include <iostream>
#include "Account.h"
#include "SavingAccount.h"

using namespace std;

int main() {
    cout << "=============Account class========" << endl;
    Account a1 {10.0};
    cout << a1 << endl;

    a1.deposit(200);
    cout << a1 << endl;

    a1.withdraw(50);
    cout << a1 << endl;

    cout << "=============SavingAccount class========" << endl;
    SavingAccount a2 {10.0,10};
    cout << a2 << endl;

    a2.deposit(200);
    cout << a2 << endl;

    a2.withdraw(50);
    cout << a2 << endl;
}
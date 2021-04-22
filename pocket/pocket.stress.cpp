#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Account.h"

using namespace std;

int main(int argc, char *argv[])
{
    Account      account(0.0);
    char         action;
    double       amount;

    if (argc > 1)
        account.deposit(atof(argv[1]));

    while (true)
    {
        cout << "Balance is " << account.getBalance() << endl;

    switch(action)
    {
        case 'd':
            cout << "Enter deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 'w':
            cout << "Enter Withdrawal: ";
            cin >> amount;
            account.withdraw(amount);
            break;

        case 'q':
            exit(0);

        default:
            cout << "Bad command." << endl;
        }
    }
}

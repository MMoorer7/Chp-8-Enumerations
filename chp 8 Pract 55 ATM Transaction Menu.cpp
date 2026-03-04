#include <iostream>
#include <string>

using namespace std;

enum TransactionType
{
    Deposit,
    Withdrawl,
    CheckBalance,
    Exit

};

int main()
{
    string user_input;
    TransactionType transaction;

    cout << "Enter Transaction (Deposit / Withdrawl / CheckBalance / Exit ";
    cin >> user_input;

    if (user_input == " Deposit")
        transaction = Deposit;

    else if (user_input == " Withdrawl")
        transaction = Withdrawl;

    else if (user_input == " CheckBalance")
        transaction = CheckBalance;

    else if (user_input == " Exit")
        transaction = Exit;

    else
    {
        cout << "Invalid Input!";
        return 0;
    }

    switch (transaction)
    {
        case Deposit:
            cout << "Opening deposit process ... ";
            break;

        case Withdrawl:
            cout << "Opening withdrawl process... ";
            break;

        case CheckBalance:
            cout << "Displaying current balance ... ";
            break;

        case Exit:
            cout << "Thank you! Exiting ATM. ";
            break;

    }

    return 0;
}


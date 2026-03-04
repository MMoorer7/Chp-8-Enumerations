#include <iostream>

using namespace std;

enum HomeMode
{
    Home = 1,
    Away = 2,
    Night = 3,
    Vacation = 4
};

int main()
{
    int mode_input;

    cout << "Enter mode (1-Home, 2-Away, 3-Night, 4-Vacation): ";
    cin >> mode_input;

    if (mode_input < 1 || mode_input > 4)
    {
        cout << "Invalid Input!";
        return 0;
    }

    HomeMode current_mode = (HomeMode)mode_input;

    switch (current_mode)
    {
    case Home:
        cout << "Home Mode: Normal settings activated.";
        break;

    case Away:
        cout << "Away Mode: Security system armed.";
        break;

    case Night:
        cout << "Night Mode: Lights dimmed, doors locked.";
        break;

    case Vacation:
        cout << "Vacation Mode: Energy saving + security enabled.";
        break;
    }

    return 0;
}
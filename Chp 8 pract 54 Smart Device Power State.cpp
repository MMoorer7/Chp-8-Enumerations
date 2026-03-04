#include <iostream>

using namespace std;

enum PowerState
{
    Off,
    On,
    Sleep
};

int main()
{
    PowerState device_state = Sleep;

    switch (device_state)
    {
    case Off:
        cout << "Device is turned off";
        break;

    case On:
        cout << "Device is running";
        break;

    case Sleep:
        cout << "Device is in power-saving mode";
        break;
    }

    return 0;
}
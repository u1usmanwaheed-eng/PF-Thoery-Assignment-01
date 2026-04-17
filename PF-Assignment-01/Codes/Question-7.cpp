#include <iostream>
using namespace std;

int main()
{
    double runner1Time, runner2Time, runner3Time;

    cout << "Enter time for runner 1: ";
    cin >> runner1Time;

    cout << "Enter time for runner 2: ";
    cin >> runner2Time;

    cout << "Enter time for runner 3: ";
    cin >> runner3Time;

    if (runner1Time < runner2Time && runner1Time < runner3Time)
        {
            cout << "Runner 1 is first" << endl;
        }
    else if (runner2Time < runner1Time && runner2Time < runner3Time)
        {
            cout << "Runner 2 is first" << endl;
        }
    else
        {
            cout << "Runner 3 is first" << endl;
        }

    return 0;
}
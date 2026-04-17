#include <iostream>
using namespace std;

int main()
{
    int temperatureValue;

    cout << "Enter temperature: ";
    cin >> temperatureValue;

    if (temperatureValue >= -50 && temperatureValue <= 150)
        {
            cout << "The number is valid" << endl;
        }
    else
        {
            cout << "The number is not valid" << endl;
        }

    return 0;
}
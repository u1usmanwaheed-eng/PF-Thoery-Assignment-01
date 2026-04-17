#include <iostream>
using namespace std;

int main()
{
    double numeratorValue, denominatorValue;

    cout << "Enter numerator: ";
    cin >> numeratorValue;

    cout << "Enter denominator: ";
    cin >> denominatorValue;

    if (denominatorValue != 0)
        {
            cout << "Result: " << numeratorValue / denominatorValue << endl;
        }
    else
        {
            cout << "Division by zero is not possible" << endl;
        }
    return 0;
}
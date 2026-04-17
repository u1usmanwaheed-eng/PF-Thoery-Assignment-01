#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    if (firstNumber > secondNumber)
    {
        cout << "Larger: " << firstNumber << endl;
        cout << "Smaller: " << secondNumber << endl;
    }
    else
    {
        cout << "Larger: " << secondNumber << endl;
        cout << "Smaller: " << firstNumber << endl;
    }

    return 0;
}
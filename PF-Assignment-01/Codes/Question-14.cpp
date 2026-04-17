#include <iostream>
using namespace std;

int main()
{
    int monthValue, dayValue, yearValue;
    cout << "Enter month value: "<< endl;
    cin >> monthValue;
    cout << "Enter day value: "<< endl;
    cin >> dayValue ;
    cout << "Enter year value: "<< endl;
    cin >> yearValue;

    if (monthValue * dayValue == yearValue)
        {
            cout << "Magic Date";
        }
    else
        {
            cout << "Not Magic";
        }

    return 0;
}
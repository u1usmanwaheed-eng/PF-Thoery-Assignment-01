#include <iostream>
using namespace std;

int main()
{
    double firstValue = 10.0;
    double secondValue = 10.0;

    firstValue = firstValue + 0.2;

    if (firstValue > secondValue)
        {
            cout << "First value is larger" << endl;
        }
    else
        {
            cout << "Second value is larger" << endl;
        }

    return 0;
}
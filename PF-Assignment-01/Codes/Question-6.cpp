#include <iostream>
using namespace std;

int main()
{
    int valueA = 2, valueB = 4, valueC = 6;

    cout << "A) " << (valueA == 4 || valueB > 2) << endl;
    cout << "B) " << (6 <= valueC && valueA < 3) << endl;
    cout << "C) " << (1 != valueB && valueC != 3) << endl;
    cout << "D) " << (valueA >= -1 || valueA <= valueB) << endl;
    cout << "E) " << (!(valueA > 2)) << endl;

    return 0;
}
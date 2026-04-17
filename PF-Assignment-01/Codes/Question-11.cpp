#include <iostream>
using namespace std;

int main()
{
    double totalSales;
    cout << "Enter Total Sales: " << endl;
    cin >> totalSales;

    if (totalSales > 50000)
        {
            totalSales = totalSales + (totalSales * 0.25) + 250;
        }

    cout << "Final sales: " << totalSales << endl;

    return 0;
}
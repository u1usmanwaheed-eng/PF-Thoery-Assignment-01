#include <iostream>
using namespace std;

int main()
{
    double salesAmount, commissionRate;

    cout << "Enter sales amount: " << endl;
    cin >> salesAmount;

    if (salesAmount <= 10000)
        {
            commissionRate = 0.10;
        }
    else if (salesAmount <= 15000)
       {
         commissionRate = 0.15;
       }
    else
        {
            commissionRate = 0.20;
        }

    cout << "Commission rate is: " << commissionRate << endl;

    return 0;
}
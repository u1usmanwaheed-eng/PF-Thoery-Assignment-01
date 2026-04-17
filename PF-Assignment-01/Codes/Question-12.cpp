#include <iostream>
using namespace std;

int main()
{
    double annualIncome;
    int yearsOfJob;
    cout << "Enter annual income: ";
    cin >> annualIncome;
    cout << "Enter  Years of job: ";
    cin >> yearsOfJob;

    if (annualIncome >= 35000 && yearsOfJob > 5)
        {
            cout << "Loan is Approved";
        }
    else
       {
         cout << "Loan is not Approved";
       }

    return 0;
}
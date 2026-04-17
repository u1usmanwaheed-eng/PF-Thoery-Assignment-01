#include <iostream>
using namespace std;

int main()
{
    int inputNumber;
    int resultValue;

    cout << "Enter value: ";
    cin >> inputNumber;

    if (inputNumber == 10){
        resultValue = 0;
    }
        
    else{
        resultValue = 1;
    }
        

    cout << "Result value: " << resultValue << endl;

    return 0;
}
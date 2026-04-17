#include <iostream>
using namespace std;

int main()
{
    double objectMass, objectWeight;

    cout << "Enter mass of the object: ";
    cin >> objectMass;

    objectWeight = objectMass * 9.8;

    cout << "Object Weight: " << objectWeight << endl;

    if (objectWeight > 1000)
       {
         cout << "Too heavy" << endl;
       }
    else if (objectWeight < 10)
        {
            cout << "Too light" << endl;
        }
    return 0;
}
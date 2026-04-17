#include <iostream>
using namespace std;

int main()
{
    int userChoice;

    cout << "1. Circle: " <<endl;
    cout << "2. Rectangle: "<<endl;
    cout << "3. Triangle: "<<endl;
    cout << "Enter your choice: "<<endl;
    cin >> userChoice;

    if (userChoice == 1)
    {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        cout << 3.14159 * radius * radius;
    }
    else if (userChoice == 2)
    {
        double length, width;
        cout << "Enter lenght and width: ";
        cin >> length >> width;
        cout << length * width;
    }
    else if (userChoice == 3)
    {
        double base, height;
        cout << "Enter base and height: ";
        cin >> base >> height;
        cout << 0.5 * base * height;
    }

    return 0;
}
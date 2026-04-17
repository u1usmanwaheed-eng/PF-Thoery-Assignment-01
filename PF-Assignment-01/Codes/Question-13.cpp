#include <iostream>
using namespace std;

int main()
{
    int tvModel;
    cout << "Enter TV Model: "<< endl;
    cin >> tvModel;

    if (tvModel == 300)
        {
            cout << "All features";
        }
    else if (tvModel == 200)
       
    {
         cout << "Stereo + Remote";
    }
    else if (tvModel == 100)
       {
         cout << "Remote only";
       }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{

    // Any year is input through the keyboard. Write a program to
    // determine whether the year is a leap year or not.

    int yr;
    cout << "\nEnter a year ";
    cin >> yr;

    // year is leap if its a centuary year and is divisible by 400
    // year is leap if its a non-centuary year and is divisible by 4
    
    if (yr % 100 == 0)
    {
        if (yr % 400 == 0)
            cout << "Leap year";
        else
            cout << "Not a leap year";
    }
    else
    {
        if (yr % 4 == 0)
            cout << "Leap year";
        else
            cout << "Not a leap year";
    }

    return 0;
}

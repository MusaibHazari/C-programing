#include <iostream>
using namespace std;
int main()
{
        // According to the Gregorian calendar, it was Monday on the
        // date 01/01/01. If any year is input through the keyboard
        // write a program to find out what is the day on 1st January of
        // this year.

        int leapdays, firstday, yr;
        long int normaldays, totaldays;

        cout << "Enter the year ";
        cin >> yr;

        // calculating the day on 1st Jan of any year
        normaldays = (yr - 1) * 365L;
        leapdays = (yr - 1) / 4 - (yr - 1) / 100 + (yr - 1) / 400;
        totaldays = normaldays + leapdays;
        firstday = totaldays % 7;

        switch (firstday)
        {
        case 0:
                cout << "Monday";
                break;
        case 1:
                cout << "Tuesday";
                break;
        case 2:
                cout << "Wednesday";
                break;
        case 3:
                cout << "Thursday";
                break;
        case 4:
                cout << "Friday";
                break;
        case 5:
                cout << "Saturday";
                break;
        case 6:
                cout << "Sunday";
                break;

        default:
                break;
        }

        return 0;
}

#include <iostream>
using namespace std;
int main()
{

    // Any integer is input through the keyboard. Write a program to
    //  find out whether it is an odd number or even number.

    int n;
    cout << "Enter any number ";
    cin >> n;

    if (n % 2 == 0)
        cout << "The number is even";
    else
        cout << "The number is odd";

    return 0;
}

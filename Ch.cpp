#include <iostream>
using namespace std;
int main()
{
    // Find the absolute value of a number entered through the
    // keyboard.

    int n;
    cout << "Enter any number ";
    cin >> n;

    if (n < 0)
        n = n * -1;
    cout << "The absolute value of given number is " << n;

    return 0;
}
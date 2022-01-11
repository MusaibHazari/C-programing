#include <iostream>
using namespace std;
int main()
{
    // A five-digit number is entered through the keyboard. Write a
    // program to obtain the reversed number and to determine
    // whether the original and reversed numbers are equal or not.

    int n, a, b, num;
    long int rev = 0;

    cout << "Enter any five digit number ";
    cin >> n;

    num = n;

    a = n % 10; // last digit
    n = n / 10; // removes last digit
    rev = rev + a * 10000L;

    a = n % 10; // 4th digit
    n = n / 10; // removes last digit
    rev = rev + a * 1000;

    a = n % 10; // 3rd digit
    n = n / 10; // removes last digit
    rev = rev + a * 100;

    a = n % 10; // 2nd digit
    n = n / 10; // removes last digit
    rev = rev + a * 10;

    a = n % 10; // 1st digit
    // n=n/10; //removes last digit
    rev = rev + a;

    if (rev == num)
        cout << "Given number & its reversed number are equal";
    else
        cout << "Given number & its reversed number are not equal";

    return 0;
}

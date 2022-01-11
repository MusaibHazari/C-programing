#include <iostream>
using namespace std;
int main()
{
    // Given the length and breadth of a rectangle, write a program to
    //  find whether the area of the rectangle is greater than its
    //  perimeter. For example, the area of the rectangle with length = 5
    //  and breadth = 4 is greater than its perimeter.

    int l, b, ar, p;

    cout << "Enter length and breadth of rectangle ";
    cin >> l >> b;

    ar = l * b;
    p = 2 * (l + b);

    if (ar > p)
        cout << "area is greater than perimeter";
    else
        cout << "area is lesser than perimeter";

    return 0;
}

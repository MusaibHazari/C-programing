#include <iostream>
using namespace std;
int main()
{
    //    Given a point (x, y), write a program to find out if it lies on the
    // x-axis, y-axis or at the origin, viz. (0, 0).

    int x, y;
    cout << "Enter the x and y coordinates of a point ";
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "Point lies on the origin";
    else if (x == 0 && y != 0)
        cout << "Point lies on Y axis";
    else if (x != 0 && y == 0)
        cout << "Point lies on X axis";
    else
        cout << "Point neither lies on any axis nor on origin";
    return 0;
}
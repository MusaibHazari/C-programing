#include <iostream>
using namespace std;
int main()
{
    //    Given the coordinates (x, y) of a center of a circle and it’s radius,
    // write a program which will determine whether a point lies inside
    // the circle, on the circle or outside the circle.

    int x, y, r, dis, d;

    cout << "Enter the radius of circle and coordinates of point(x,y) ";
    cin >> r >> x >> y;

    dis = x * x + y * y;
    d = r * r;

    if (dis == d)
        cout << "point lies on the circle";
    else
    {
        if (dis > d)
            cout << "point is outside the circle";
        else
            cout << "point is inside the circle";
    }

    return 0;
}

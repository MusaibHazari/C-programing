#include <iostream>
using namespace std;
int main()
{
    //    Given three points (x1, y1), (x2, y2) and (x3, y3), write a
    // program to check if all the three points fall on one straight line.

    int x1, y1, x2, y2, x3, y3, s1, s2, s3;

    cout << "Enter the values of (x1,y1) i.e coordinates of first point ";
    cin >> x1 >> y1;

    cout << "Enter the values of (x2,y2) i.e coordinates of first point ";
    cin >> x2 >> y2;

    cout << "Enter the values of (x3,y3) i.e coordinates of first point ";
    cin >> x3 >> y3;

    // calculating the slope of line between each pair of points

    s1 = (x2 - x1) / (y2 - y1);
    s3 = (x3 - x1) / (y3 - y1);
    s1 = (x3 - x2) / (y3 - y2);

    if (s1 == s2 && s1 == s3)
        cout << "Points are collinear";
    else
        cout << "Points are not collinear";

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // Write a program to check whether a triangle is valid or not,
    //  when the three angles of the triangle are entered through the
    //  keyboard. A triangle is valid if the sum of all the three angles
    //  is equal to 180 degrees.

    float ang1, ang2, ang3;

    cout << "Enter three angles of the triangle ";
    cin >> ang1 >> ang2 >> ang3;

    if ((ang1 + ang2 + ang3) == 180)
        cout << "The triangle is a valid triangle ";
    else
        cout << "The triangle is an invalid triangle ";

    return 0;
}

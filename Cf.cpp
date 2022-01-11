#include <iostream>
using namespace std;
int main()
{
    // If the ages of Ram, Shyam and Ajay are input through the
    // keyboard, write a program to determine the youngest of the
    // three.

    int r, s, a, young;
    cout << "Enter age of ram,sham and ajay ";
    cin >> r >> s >> a;

    if (r < s)
    {
        if (r < a)
            young = r;
        else
            young = a;
    }
    else
    {
        if (s < a)
            young = s;
        else
            young = a;
    }

    // cout<<"The youngest of ram "<<r<<","<<"sham "<<s<<" and "<<"ajay "<<a<<" is "<<young;
    cout << "The youngest one is having age of " << young;

    return 0;
}
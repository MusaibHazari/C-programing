#include <iostream>
using namespace std;
int main()
{

    // (Q) If cost price and selling price of an item is input through the
    // keyboard, write a program to determine whether the seller has
    // made profit or incurred loss. Also determine how much profit
    // he made or loss he incurred.

    float cp, sp, p, l;
    cout << "Enter cost price and selling price ";
    cin >> cp >> sp;

    p = sp - cp;
    l = cp - sp;

    if (p > 0)

        cout << "The seller has made a profit of Rs. " << p;

    else if (l > 0)
        cout << "The seller is in loss by Rs. " << l;
    else if (p == 0)
        cout << "There is NO LOSS, NO PROFIT ";

    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int d1 = x / k;
        int d2 = y / k;
        if (d1 * k < x)
            d1++;
        if (d2 * k < y)
            d2++;
        if (d2 >= d1)
            cout << d2 * 2 << endl;
        else
            cout << (d1 * 2) - 1 << endl;
    }
}
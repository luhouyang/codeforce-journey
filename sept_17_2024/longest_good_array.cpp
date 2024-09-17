#include <iostream>
#include <math.h>

using ld = long double;
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        ld l, r = 0.0;
        cin >> l >> r;

        ld a = 1.0;
        ld b = 2.0 * a - 1;
        ld c = -(r - l) * 2.0;
        ld roots = 0.0;

        roots = (-b + sqrt(b * b - 4.0 * a * c)) / 2.0 * a;
        cout << floor(roots) + 1<< endl;
    }
}
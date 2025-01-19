#include <bits/stdc++.h>

using namespace std;

int t, n, m, x, y, i;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        int cx = 0, cy = 0, ix = 0, iy = 0;

        cin >> ix >> iy;
        cx = ix;
        cy = iy;
        n--;

        while (n--)
        {
            cin >> x >> y;

            cx += x;
            cy += y;
        }

        cx += m;
        cy += m;

        int sm = (cx - ix) * 2 + (cy - iy) * 2;
        cout << sm << '\n';
    }
}
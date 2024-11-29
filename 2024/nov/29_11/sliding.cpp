#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll t, n, m, r, c;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n >> m >> r >> c;
        ll sm = 0, mr = 0, mc = 0;

        mr = n - r;
        mc = m - c;

        sm = mc + mr * (2 * m - 1);

        cout << sm << '\n';
    }
}
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll t, l, r, d, ub;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> l >> r;

        if (r - l == 2)
        {
            cout << r << ' ' << r - 1 << ' ' << l << '\n';
        }
        else
        {
            d = log2(r);

            ub = pow(2, d);

            if (ub == l)
            {
                ll rg = r - ub;
                ll ubrd = log2(rg);
                ll ubr = pow(2, ubrd);

                cout << ub + ubr << ' ' << ub + ubr - 1 << ' ' << ub << '\n';
            }
            else
            {
                cout << ub << ' ' << ub - 1 << ' ' << l << '\n';
            }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t, i;
ll a, n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n;
        bool flg = false;

        if (n == 2)
        {

            for (i = 0; i < 2; i++)
            {
                cin >> a;
                if (a < 3)
                {
                    flg = true;
                }
            }
        }
        else
        {
            ll m = n / 2;
            ll lm = m * 2 + 1;

            ll lft = lm + m * 2;
            ll rgh = lm;

            for (i = 0; i <= m; i++)
            {
                cin >> a;
                if (a < lft - i * 2)
                {
                    flg = true;
                }
            }

            for (i = m + 1; i < n; i++)
            {
                cin >> a;
                if (a < rgh + (i - m) * 2)
                {
                    flg = true;
                }
            }
        }

        if (flg)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}
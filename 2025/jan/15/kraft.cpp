#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t, n, i, r;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n;

        bool flg = false;

        ll aval[n] = {0};
        ll req[n] = {0};
        ll rm[n] = {0};

        for (i = 0; i < n; i++)
        {
            cin >> aval[i];
        }

        for (i = 0; i < n; i++)
        {
            cin >> req[i];
        }

        for (i = 0; i < n; i++)
        {
            rm[i] = aval[i] - req[i];
        }

        for (i = 0; i < n; i++)
        {
            if (rm[i] < 0)
            {
                ll cmp = -rm[i];
                for (int a = 0; a < i; a++)
                {
                    if (rm[a] < cmp)
                    {
                        flg = true;
                        break;
                    }
                    else
                    {
                        rm[a] -= cmp;
                    }
                }
                if (flg)
                {
                    break;
                }
                for (int a = i + 1; a < n; a++)
                {
                    if (rm[a] < cmp)
                    {
                        flg = true;
                        break;
                    }
                    else
                    {
                        rm[a] -= cmp;
                    }
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
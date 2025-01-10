#include <bits/stdc++.h>

using namespace std;

int t, n, a, p, i;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n >> p;

        bool f = false;

        for (i = 1; i < n; i++)
        {
            cin >> a;

            if (2*min(a, p) > max(a, p))
            {

                for (i=i+1; i < n; i++)
                {
                    cin >> a;
                }

                f = true;
                break;
            }
            else
            {
                p = a;
            }
        }

        if (f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
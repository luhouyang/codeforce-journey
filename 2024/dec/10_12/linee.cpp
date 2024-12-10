#include <bits/stdc++.h>

using namespace std;

int t, n, m, i;
string strin;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        int ns = 0;

        for (i = 0; i < n; i++)
        {
            cin >> strin;

            m -= strin.length();

            if (m >= 0)
            {
                ns++;
            }
        }

        cout << ns << '\n';
    }
}
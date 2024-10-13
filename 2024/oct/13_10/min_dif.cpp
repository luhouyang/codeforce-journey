#include <bits/stdc++.h>

using namespace std;

long long a[200000];
int t, n, i;
long long mn, mx, s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        mn = 1e18;
        mx = -1;
        s = 0;
        for (i = 0; i < n; i++)
        {
            // the minimum number to the left
            s += a[i];
            mn = min(mn, s / (i + 1));
        }
        s = 0;
        for (i = n - 1; i > -1; i--)
        {
            // the largest number to the right
            s += a[i];
            mx = max(mx, (s + n - i - 1) / (n - i));
        }
        cout << mx - mn << endl;
    }
    return 0;
}
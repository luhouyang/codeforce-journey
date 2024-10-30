#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n, s, ct, k, p;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1];
        s = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            ct = 0;
            k = i;
            while (a[k] != 0)
            {
                ct += 1;
                p = a[k];
                a[k] = 0;
                k = p;
            }
            s += (ct - 1) / 2;
        }
        cout << s << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;
long long t, x, ans, m;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> x >> m;
        ans = 0;
        for (int i = 1; i <= m && i <= 2 * x; i++)
        {
            if (x != i && (x % (i ^ x) == 0 || i % (i ^ x) == 0))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
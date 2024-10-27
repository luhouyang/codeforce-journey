#include <bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef long long ll;

typedef pair<ll, ll> pll;

#define endl '\n'

#define for1(n) for (int i = 1; i <= n; i++)
#define for0(n) for (int i = 0; i < n; i++)
#define forn(n) for (int i = n; i > 0; i--)

ll mod = 1e9 + 7; // 998244353 ;// 1e9+9;
ll inf = 1e18;
const ll maxn = 2e5 + 10;

ll t, n, a[maxn], ps[maxn], dp[maxn], ans[maxn];
pll p[maxn];
bool seen[maxn];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        for1(n)
        {
            cin >> a[i];
            ps[i] = ps[i - 1] + a[i];
            p[i] = {ps[i], i};
            seen[i] = false;
        }
        sort(p + 1, p + n + 1);
        p[0] = {1e6, 0};
        for1(n)
        {
            if (p[i - 1].first == p[i].first)
            {
                ans[p[i].second] = p[i - 1].second;
            }
            else
            {
                ans[p[i].second] = 0;
            }
        }
        if (ps[1] == 0)
        {
            dp[1] = 1;
        }
        else
        {
            dp[1] = 0;
        }
        for (int i = 2; i <= n; i++)
        {
            if (ans[i] == 0)
            {
                if (ps[i] == 0)
                {
                    dp[i] = max(dp[i - 1], dp[ans[i]] + 1);
                }
                else
                {
                    dp[i] = dp[i - 1];
                }
            }
            else if (ans[i] > 0)
            {
                dp[i] = max(dp[i - 1], dp[ans[i]] + 1);
            }
            else
            {
                dp[i] = dp[i - 1];
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}
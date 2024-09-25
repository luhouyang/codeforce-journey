#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const int maxn = 2e5 + 5;
int pref[maxn];

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
ll Rand(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rd); }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        map<int, ll> hashValue;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            if (!hashValue.count(x))
                hashValue[x] = Rand(1, 1e18);
            pref[i] = pref[i - 1] ^ hashValue[x];
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << (pref[r] ^ pref[l - 1] ? "NO\n" : "YES\n");
        }
    }
    return 0;
}
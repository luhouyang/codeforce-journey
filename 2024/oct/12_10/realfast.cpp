#include "bits/stdc++.h"
#define int long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define em emplace_back
#define mp make_pair
#define F first
#define S second

using namespace std;
template <class C>
using vec = vector<C>;
using vi = vector<int>;
using vpi = vector<pair<int, int>>;
using pii = pair<int, int>;

void solve()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l1 > l2)
    {
        swap(l1, l2);
        swap(r1, r2);
    }
    if (r1 < l2)
    {
        cout << 1 << '\n';
        return;
    }
    int l = max(l1, l2);
    int r = min(r1, r2);
    int len = r - l + 2;
    if (r == max(r1, r2))
        len--;
    if (l == min(l1, l2))
        len--;
    cout << len << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
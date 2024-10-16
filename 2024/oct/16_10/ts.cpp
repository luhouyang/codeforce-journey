#include <bits/stdc++.h>

#define all(x) begin(x), end(x)
#define F first
#define S second

using namespace std;

using ll = long long;
using vi = vector<int>;

void solve()
{
    string a, b;
    cin >> a >> b;
    if (a.size() > b.size())
        swap(a, b);
    int n = a.size(), m = b.size();
    int res = n, i = 0;
    for (; i < n; ++i)
    {
        if (a[i] != b[i])
            break;
    }
    res += min(n - i + 1, n);
    cout << res + m - n << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

#define int long long
#define pb push_back
#define in insert

#define sortva(ans) sort(ans.begin(), ans.end());
#define sortvd(ans) sort(ans.rbegin(), ans.rend());

const int MOD = 1e9 + 7;

bool condition(int mid, vector<int> a)
{
    int n = a.size();

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    double ave = (sum + mid) / n;
    ave /= 2;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < ave)
        {
            cnt++;
        }
    }

    if (cnt > n / 2)
        return true;
    return false;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
        return;
    }

    int low = -1;
    int high = 1e16;

    while ((high - low) > 1)
    {
        int mid = (low + high) / 2;

        if (condition(mid, a))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }

    cout << high << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
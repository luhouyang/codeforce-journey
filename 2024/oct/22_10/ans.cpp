#include <bits/stdc++.h>
#define int long long
using pii = std::pair<int, int>;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n;
        string s;
        cin >> n >> s;
        int good = 0;
        for (int i = 0; i < n; i++)
        {
            // as long as there are sequences like "1" AND ("100..." OR "...001" OR "...0110...")
            if (s[i] == '1' && (i == 0 || i == n - 1 || s[i - 1] == '1' || s[i + 1] == '1'))
            {
                good = 1;
                break;
            }
        }
        if (good)
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
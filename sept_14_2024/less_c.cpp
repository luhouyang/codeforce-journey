#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve()
{
    int ns, q;
    cin >> ns >> q;

    string a, b;
    cin >> a >> b;

    vector<vector<int>> ar(ns + 1, vector<int>(26, 0));
    vector<vector<int>> br(ns + 1, vector<int>(26, 0));

    for (int i = 1; i <= ns; i++)
    {
        ar[i][a[i - 1] - 'a']++;
        for (int j = 0; j < 26; j++)
        {
            ar[i][j] += ar[i - 1][j];
        }
    }

    for (int i = 1; i <= ns; i++)
    {
        br[i][b[i - 1] - 'a']++;
        for (int j = 0; j < 26; j++)
        {
            br[i][j] += br[i - 1][j];
        }
    }

    while (q--)
    {
        int ans = 0;
        int l, r;
        cin >> l >> r;

        for (int i = 0; i < 26; i++)
        {
            int u = ar[r][i] - ar[l - 1][i];
            int v = br[r][i] - br[l - 1][i];

            ans += abs(u - v);
        }

        cout << ans / 2 << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }

    return 0;
}
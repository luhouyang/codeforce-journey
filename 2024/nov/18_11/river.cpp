#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> tu(m + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> tu[j][i];
            if (i > 1)
                tu[j][i] |= tu[j][i - 1];
        }
    }
    while (q--)
    {
        int t = 0;
        cin >> t;
        int high = n + 1, low = 1;
        while (t--)
        {
            int a, b;
            char o;
            cin >> a;
            cin >> o;
            cin >> b;
            if (o == '<')
                high = min(high, int(lower_bound(tu[a].begin(), tu[a].end(), b) - tu[a].begin()));
            else
                low = max(low, int(upper_bound(tu[a].begin(), tu[a].end(), b) - tu[a].begin()));
        }
        cout << (low >= high ? -1 : low) << endl;
    }
}
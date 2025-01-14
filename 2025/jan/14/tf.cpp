#include <bits/stdc++.h>

using namespace std;

int t, n, a, b;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n >> a >> b;

        if (abs(a - b) % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

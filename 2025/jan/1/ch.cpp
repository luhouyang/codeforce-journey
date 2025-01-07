#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, m, t, i;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--) {
        cin >> n >> m;
        cout << max(n, m) + 1 << '\n';
    }

    return 0;
}
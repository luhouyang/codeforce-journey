#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "cp/debug.h"
#else
#define debug(...)
#define cerr   \
    if (false) \
    cerr
#endif

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin.exceptions(cin.failbit);
    int tt;
    cin >> tt;
    for (int w = 0; w < tt; ++w)
    {
        int n;
        cin >> n;
    }
    const int N = (int)1e5;
    const int MOD = (int)1e9 + 7;
    int pw[N];
    pw[0] = 1;
    for (int i = 1; i < N; ++i)
    {
        pw[i] = 2 * pw[i - 1];
        if (pw[i] >= MOD)
            pw[i] -= MOD;
    }
    for (int w = 0; w < tt; ++w)
    {
        int k;
        cin >> k;
        cout << pw[k] << '\n';
    }

    return 0;
}
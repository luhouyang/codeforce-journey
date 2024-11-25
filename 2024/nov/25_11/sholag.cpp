#include <bits/stdc++.h>

using namespace std;

int t, n, i;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n;
        cout << 2;

        int lm = n * 2 + 1;
        for (i = 3; i < lm; i += 2)
        {
            cout << " " << i;
        }

        cout << '\n';
    }
}
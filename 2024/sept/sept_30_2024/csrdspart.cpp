#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
long long t, n, k, x, sum, mx;

int main()
{
    for (cin >> t; t--;)
    {
        cin >> n >> k;
        mx = sum = 0;
        for (int i = 1; i <= n; i++)
            cin >> x, sum += x, mx = max(mx, x);
        for (int i = n; i >= 1; i--)
        {
            // deck num * deck size       |   deck number
            if ((sum + k) / i * i >= sum && (sum + k) / i >= mx)
            {
                cout << i << "\n";
                break;
            }
        }
    }
}
#include <iostream>

using ll = long long;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, x;
        cin >> n >> k;

        ll mx = 0;
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
            mx = max(mx, x);
        }

        for (int i = n; i >= 1; i--)
        {
            if ((sum + k) / i * i >= sum && (sum + k) / i >= mx)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
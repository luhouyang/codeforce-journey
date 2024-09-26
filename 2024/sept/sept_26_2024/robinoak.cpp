#include <iostream>

using ll = long long;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll sum = 0;

        if (n % 2 == 0)
        {
            ll m = k / 2;
            // ll r = k % 2;

            sum = m;
        }
        else
        {
            ll m = k / 2;
            ll r = k % 2;

            sum = m + r;
        }

        if (sum % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
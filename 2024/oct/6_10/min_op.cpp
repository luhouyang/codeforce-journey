#include <iostream>
#include <vector>

using ll = long long;
using namespace std;

// vector<ll> powers;
ll n, k;
int c, p;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;

        if (n < k)
        {
            cout << n << endl;
        }
        else if (n == k)
        {
            cout << 1 << endl;
        }
        else if (k == 1)
        {
            cout << n << endl;
        }
        else
        {
            // powers = {1};
            ll pw = 1;
            c = 0;
            p = 1;

            while (true)
            {
                // int pw = powers[p] * k;
                pw = pw * k;
                if (n >= pw)
                {
                    p++;
                    // powers.push_back(pw);
                }
                else
                {
                    break;
                }
            }

            // for (int i = powers.size() - 1; i >= 0; i--)
            for (int i = 0; i <= p; i++)
            {
                // c += n / powers[i];
                // n = n % powers[i];
                c += n / pw;
                n = n % pw;
                pw = pw / k;

                if (n <= 0)
                {
                    break;
                }
            }

            cout << c << endl;
        }
    }
}
#include <iostream>
#include <map>

#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        ll prev_c, carry = -1;
        ll prev, x = 0;
        // ll c_arr[n];

        map<ll, ll> q_to_f;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            carry += (n - i - 1) - (i - 1);
            // c_arr[i] = carry;
            // cout << carry << "|";

            // if (i == 0)
            // {
            //     if (q_to_f.find(carry) == q_to_f.end())
            //     {
            //         q_to_f[carry] = 1;
            //     }
            //     else
            //     {
            //         q_to_f[carry]++;
            //     }

            //     cin >> x;
            //     carry += (n - i - 1) - (i);
            // }

            if (q_to_f.find(carry) == q_to_f.end())
            {
                q_to_f[carry] = 1;
            }
            else
            {
                q_to_f[carry]++;
            }

            if (i != 0 && x - prev > 1)
            {
                if (q_to_f.find(prev_c - i + 1) == q_to_f.end())
                {
                    q_to_f[prev_c - i + 1] = x - prev - 1;
                }
                else
                {
                    q_to_f[prev_c - i + 1] += x - prev - 1;
                }
            }
            prev_c = carry;
            prev = x;
        }
        // cout << endl;

        while (q--)
        {
            cin >> x;
            try
            {
                cout << q_to_f[x] << " ";
            }
            catch (const std::exception &e)
            {
                cout << 0 << " ";
            }
        }

        cout << endl;
    }
}
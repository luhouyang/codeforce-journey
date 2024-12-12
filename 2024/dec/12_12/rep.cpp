#include <bits/stdc++.h>

using namespace std;

int t, n, i;
string strin;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> strin;

        int alpha[26] = {0};
        int mx = 0, mn = n, mxi = 0, mni = 0;

        for (i = 0; i < n; i++)
        {
            // int idx = strin[i] - 'a';
            ++alpha[strin[i] - 'a'];

            // if (alpha[idx] < mn)
            // {
            //     mn = alpha[idx];
            //     mni = idx;
            // }

            // if (alpha[idx] > mx && idx != mni)
            // {
            //     mx = alpha[idx];
            //     mxi = idx;
            // }
        }

        // ++alpha[mxi];
        // --alpha[mni];

        for (i = 0; i < 26; i++)
        {
            // if (alpha[i] != 0)
            // {
            // cout << string(alpha[i], i + 'a');

            // }

            if (alpha[i] < mn && alpha[i] != 0)
            {
                mn = alpha[i];
                mni = i;
            }

            if (alpha[i] >= mx)
            {
                mx = alpha[i];
                mxi = i;
            }
        }
        // cout << mxi << ' ' << mni << '\n';
        // cout << '\n';
        char mxc = mxi + 'a';
        char mnc = mni + 'a';

        for (i = 0; i < n; i++)
        {
            if (strin[i] == mnc)
            {
                strin[i] = mxc;
                break;
            }
        }

        cout << strin << '\n';
    }
}
#include <bits/stdc++.h>
// #include <map>

using namespace std;

int t, n, i;
std::string s;

signed main()
{
    ios::sync_with_stdio(0), cout.tie(0), cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> s;

        char cur_char = s[0];
        int n0 = 0, n1 = 0, alice = 0, bob = 0, cc_len = 1;
        // map<int, int> seq0len_num, seq1len_num;

        for (i = 1; i < n; i++)
        {
            if (s[i] == cur_char)
            {
                cc_len++;
            }
            else
            {
                
                if (cur_char == '1')
                {
                    bob += cc_len - 1;
                    n1++;
                }
                else
                {
                    alice += cc_len - 1;
                    n0++;
                }
                cc_len = 1;
                cur_char = s[i + 1];
                i++;
            }
        }

        if (alice <= bob)
        {
            int dif = bob - alice;

            if (n1 >= n0 - dif)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            int dif = alice - bob;

            if (n1 >= n0 + dif)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

HouYang:;
    return 0;
}
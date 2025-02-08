#include <bits/stdc++.h>

using namespace std;

int t, i;
string str;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> str;

        int sm = 0;
        for (i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
            {
                sm++;
            }
        }
        cout << sm << '\n';
    }
}
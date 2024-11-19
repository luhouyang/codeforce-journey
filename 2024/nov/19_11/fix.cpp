#include <bits/stdc++.h>

using namespace std;

int t;
string in_str;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> in_str;

        if (in_str[0] == in_str[2])
        {
            if (in_str[1] == '=')
            {
                cout << in_str;
            }
            else
            {
                cout << in_str[0] << '=' << in_str[2];
            }
        }
        else
        {

            if (in_str[0] < in_str[2])
            {
                cout << in_str[0] << '<' << in_str[2];
            }
            else
            {
                cout << in_str[0] << '>' << in_str[2];
            }
        }

        cout << '\n';
    }
}
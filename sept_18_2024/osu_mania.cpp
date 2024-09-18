#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0;
    cin >> t;

    while (t--)
    {
        int n = 0;
        cin >> n;

        char seq[n][4];

        for (int i = 0; i < n; i++)
        {
            cin >> seq[i];
        }

        string output;

        for (int i = n - 1; i >= 0; i--)
        {
            if (seq[i][0] == '#')
            {
                output = output + "1 ";
            }
            else if (seq[i][1] == '#')
            {
                output = output + "2 ";
            }
            else if (seq[i][2] == '#')
            {
                output = output + "3 ";
            }
            else
            {
                output = output + "4 ";
            }
        }

        cout << output << endl;
    }
}
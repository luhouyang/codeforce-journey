#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int br = b % 2;

        if (br == 0)
        {
            int ar = a % 2;
            if (ar == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int ar = a % 2;
            if (ar == 0 && a != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
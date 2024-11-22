#include <bits/stdc++.h>

using namespace std;

int n, b, p, pc = 0;
string ev;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--)
    {
        cin >> ev;

        if (ev == "P")
        {
            cin >> p;
            pc += p;
        }
        else
        {
            cin >> b;

            if (pc >= b)
            {
                pc -= b;
                cout << "NO\n";
            }
            else
            {
                pc = 0;
                cout << "YES\n";
            }
        }
        
    }

    HouYang:;
    return 0;
}
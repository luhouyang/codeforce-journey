#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x, m = 0;
        cin >> n;
        string str = "";
        while (m < n)
        {
            cout << "? " << str << "0" << endl;
            cin >> x;
            if (x)
            {
                str += "0";
                ++m;
                continue;
            }
            cout << "? " << str << "1" << endl;
            cin >> x;
            if (!x)
                break;
            str += "1";
            ++m;
        }
        while (m < n)
        {
            cout << "? 0" << str << endl;
            cin >> x;
            if (x)
            {
                str = "0" + str;
                ++m;
                continue;
            }
            str = "1" + str;
            ++m;
        }
        cout << "! " << str << endl;
    }
}
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() < 3)
        {
            cout << "NO" << endl;
        }
        else if (s[0] != '1' || s[1] != '0')
        {
            cout << "NO" << endl;
        }
        else if (s[2] == '0')
        {
            cout << "NO" << endl;
        }
        else
        {
            // bool found = false;

            // for (int i = 1; i < s.size(); i++) {
            //     if (s[i] != '0') {
            //         found = true;

            //         break;
            //     }
            // }

            // if (!found) {
            //     cout << "NO" << endl;
            // }

            string ii;
            for (int j = 2; j < s.size(); j++)
            {
                ii += s[j];
            }

            if (stoi(ii) >= 2)
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
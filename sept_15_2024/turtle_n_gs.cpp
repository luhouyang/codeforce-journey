#include <bits/stdc++.h>
#include <math.h>

using ll = long long;

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

        string str;
        cin >> str;

        int c = 2;
        int sp = n / c;
        int j = 0;
        bool found = false;
        while (sp >= 1)
        {
            char f_char[sp] = {0};
            char e_char[sp] = {0};

            for (int i = 0; i < n; i += c)
            {
                f_char[j] = str[i];
                j++;
            }

            j = 0;
            for (int i = c - 1; i < n; i += c)
            {
                e_char[j] = str[i];

                // for (int k = 0; k <= sp; k++)
                // {
                //     if (str[i] == f_char[k])
                //     {
                //         if (k != j)
                //         {
                //             found = true;
                //             cout << "NO" << endl;
                //             break;
                //         }
                //     }
                // }
                j++;
            }

            for (int i = 0; i < sp; i++)
            {
                for (int m = 0; m < sp; m++)
                {
                    if (f_char[i] == e_char[m] && i != m)
                    {
                        found = true;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }

            c++;
            sp = n / c;
        }

        if (!found)
        {
            cout << "YES" << endl;
        }
    }
}
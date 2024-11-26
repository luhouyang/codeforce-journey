#include <bits/stdc++.h>

using namespace std;

int t, i, j, c, s;
string instr;
char cmp;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> instr;

        bool found = false;
        int lm = instr.size();
        int lc = 1;
        if (instr.size() == 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            while (!found)
            {
                lm--;
                lc++;
                for (i = 0; i < lm; i++)
                {
                    string ss = instr.substr(i, lc);
                    c = 1;
                    s = 1;
                    cmp = ss[0];
                    for (j = 1; j < lc; j++)
                    {
                        if (cmp == ss[j])
                        {
                            c++;
                            s++;
                        }
                        else
                        {
                            s = 0;
                            cmp = ss[j];
                        }
                    }
                    if (c < lc - 1)
                    {
                        found = true;
                        cout << ss << '\n';
                        break;
                    }
                    if (s % 2 == 0 && s != 0)
                    {
                        found = true;
                        cout << ss << '\n';
                        break;
                    }
                }
            }

            if (!found)
            {
                cout << -1 << '\n';
            }
        }
    }
}
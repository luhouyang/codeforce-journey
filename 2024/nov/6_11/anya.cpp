#include <bits/stdc++.h>
#include <vector>

using namespace std;

int t, q, d, v, i;
string str;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> str >> q;

        if (str.size() < 4)
        {
            while (q--)
            {
                cin >> d >> v;
                cout << "NO\n";
            }
        }
        else
        {
            str = '0' + str;

            int ss = str.size();

            int ns = 0;
            int mask[ss] = {0};

            for (i = 1; i <= ss - 3; i++)
            {
                if (str.substr(i, 4) == "1100")
                {
                    mask[i] = 1;
                    mask[i + 1] = 2;
                    mask[i + 2] = 3;
                    mask[i + 3] = 4;
                    ns++;
                }
            }

            while (q--)
            {
                cin >> d >> v;
                string c = to_string(v);

                if (c[0] != str[d])
                {
                    str[d] = c[0];

                    if (mask[d] == 1)
                    {
                        mask[d] = 0;
                        mask[d + 1] = 0;
                        mask[d + 2] = 0;
                        mask[d + 3] = 0;
                        ns--;
                    }
                    else if (mask[d] == 2)
                    {
                        mask[d - 1] = 0;
                        mask[d] = 0;
                        mask[d + 1] = 0;
                        mask[d + 2] = 0;
                        ns--;
                    }
                    else if (mask[d] == 3)
                    {
                        mask[d - 2] = 0;
                        mask[d - 1] = 0;
                        mask[d] = 0;
                        mask[d + 1] = 0;
                        ns--;
                    }
                    else if (mask[d] == 4)
                    {
                        mask[d - 3] = 0;
                        mask[d - 2] = 0;
                        mask[d - 1] = 0;
                        mask[d] = 0;
                        ns--;
                    }

                    int st = max(1, d - 3), ed = min(ss, d + 3);
                    for (i = st; i <= ed - 3; i++)
                    {
                        if (str.substr(i, 4) == "1100")
                        {
                            mask[i] = 1;
                            mask[i + 1] = 2;
                            mask[i + 2] = 3;
                            mask[i + 3] = 4;
                            ns++;
                        }
                    }
                }

                if (ns)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}
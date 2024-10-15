
// level 1 is keys that reach black in one step, any step that reaches this key is also counted

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n + 1), vs(n + 1, 0), rs(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        string s;
        cin >> s;
        for (int i = 1; i <= n; i++)
        {
            if (!vs[i])
            {
                vector<int> cy;
                int cu = i;
                while (!vs[cu])
                {
                    vs[cu] = 1;
                    cy.push_back(cu);
                    cu = p[cu];
                }
                int bc = 0;
                for (int id : cy)
                    if (s[id - 1] == '0')
                        bc++;
                for (int id : cy)
                    rs[id] = bc;
            }
        }
        for (int i = 1; i <= n; ++i)
            cout << rs[i] << ' ';
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int tab[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> tab[i][j];

        int answ = 0;
        for (int i = 0; i < n; i++)
        {
            int l = 0, c = i;
            int minim = 0;
            while (l < n && c < n)
            {
                minim = min(minim, tab[l][c]);
                l++;
                c++;
            }
            answ += (-minim);
        }
        for (int i = 1; i < n; i++)
        {
            int l = i, c = 0;
            int minim = 0;
            while (l < n && c < n)
            {
                minim = min(minim, tab[l][c]);
                l++;
                c++;
            }
            answ += (-minim);
        }
        cout << answ << endl;
    }
}
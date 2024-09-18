#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    cin >> n;

    int n_chr, n_que, l, r, op, len = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> n_chr;
        cin >> n_que;

        char a[n_chr + 1];
        char b[n_chr + 1];

        cin >> a;
        cin >> b;

        int ai[n_chr][26] = {0};
        int bi[n_chr][26] = {0};

        for (int j = 0; j < n_chr; j++)
        {
            for (int g = 0; g < 26; g++)
            {
                ai[j][a[j] - 'a']++;
                bi[j][b[j] - 'a']++;
            }
        }

        for (int j = 0; j < n_que; j++)
        {
            cin >> l;
            cin >> r;

            l -= 1;
            r -= 1;

            // len = r - l + 1;

            // char tmp[len];
            // int tmpa[26] = {0};
            // int tmpb[26] = {0};
            // for (int aw = l; aw <= r; aw++)
            // {
            //     // tmp[aw - l] = a[aw];
            //     tmpa[ai[aw]]++;
            //     tmpa[bi[aw]]++;
            // }

            for (int c = l; c <= r; c++)
            {
                op += abs(ai[a[c] - 'a'] - bi[b[c] - 'a']);
            }

            // for (int bw = l; bw <= r; bw++)
            // {
            //     for (int c = 0; c < len; c++)
            //     {
            //         if (tmp[c] == b[bw])
            //         {
            //             op--;
            //             tmp[c] = '0';
            //             break;
            //         }
            //     }
            // }

            // for (int bw = l; bw <= r; bw++)
            // {
            //     if (tmp[bi[bw]] > 0)
            //     {
            //         tmp[bi[bw]]--;
            //         op--;
            //     }
            // }

            // for (int c = 0; c < 26; c++)
            // {
            //     cout << tmp[c] << endl;
            // }

            // cout << tmp[0] << endl;

            cout << op << endl;
            l = r = op = len = 0;
        }

        n_chr = n_que = 0;
    }
}
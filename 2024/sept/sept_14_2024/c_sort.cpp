#include <iostream>

using namespace std;

int main()
{
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

        for (int j = 0; j < n_que; j++)
        {
            cin >> l;
            cin >> r;

            l -= 1;
            r -= 1;

            op = len = r - l + 1;

            // char tmp[len];
            int tmp[26] = {0};
            for (int aw = l; aw <= r; aw++)
            {
                // tmp[aw - l] = a[aw];
                tmp[a[aw] - 'a']++;
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

            for (int bw = l; bw <= r; bw++)
            {
                if (tmp[b[bw] - 'a'] > 0)
                {
                    tmp[b[bw] - 'a']--;
                    op--;
                }
            }

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
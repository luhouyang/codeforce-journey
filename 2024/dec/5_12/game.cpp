#include <bits/stdc++.h>
#include <map>

using namespace std;

int t, n, c, i;

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        // int arr[n + 1] = {0};
        map<int, int> m;

        for (i = 0; i < n; i++)
        {
            scanf("%d", &c);
            // arr[c]++;
            if (m.find(c) == m.end())
            {
                m[c] = 1;
            }
            else
            {
                m[c]++;
            }
        }

        int n1 = 0;
        int tt = 0;
        for (auto val : m)
        {
            if (val.second == 1)
            {
                n1++;
            }
            else
            {
                tt++;
            }
        }

        int ans = tt + n1 + n1 % 2;
        // printf("%d %d %d %d\n", ans, tt, n1, n1%2);
        printf("%d\n", ans);

        // sort(arr + 1, arr + n + 1);

        // int n1 = 0;
        // for (i = 1; i <= n; i++)
        // {
        //     if (arr[i] != 0)
        //     {
        //         for (; i <= n; i++)
        //         {
        //             if (arr[i] == 1)
        //             {
        //                 n1++;
        //             }
        //             else
        //             {
        //                 break;
        //             }
        //         }
        //     }
        // }

        // printf("%d %d %d %d ", n, i, n1, n1 % 2);
        // int r = n1 % 2;
        // int ans = n1 + r + n - i;

        // printf("%d", ans);
    }
}
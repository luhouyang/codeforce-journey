#include "bits/stdc++.h"

#define ll long long

char c;
int t, n, q, l, r, i, x;

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        // scanf("%d%d", &n, &q);
        std::cin >> n >> q;

        // ll arr[n] = {0};
        ll max = 0;
        // int x = 0;

        for (i = 0; i < n; i++)
        {
            // std::cin >> arr[i];
            std::cin >> x;
            if (x > max)
            {
                // x = i;
                max = x;
            }
        }

        while (q--)
        {
            // scanf("%c%d%d", &c, &l, &r);
            std::cin >> c >> l >> r;

            if (c == '+')
            {
                // for (i = 0; i < n; i++)
                // {
                //     if (arr[i] >= l && arr[i] <= r)
                //     {
                //         arr[i]++;
                //     }

                //     if (arr[i] > max)
                //     {
                //         x = i;
                //         max = arr[i];
                //     }
                // }

                if (max >= l && max <= r)
                {
                    max++;
                }
            }
            else
            {
                // for (i = 0; i < n; i++)
                // {
                //     if (arr[i] >= l && arr[i] <= r)
                //     {
                //         arr[i]--;
                //         if (i == x)
                //         {
                //             max--;
                //         }
                //     }

                //     if (arr[i] > max)
                //     {
                //         x = i;
                //         max = arr[i];
                //     }
                // }

                if (max >= l && max <= r)
                {
                    max--;
                }
            }

            std::cout << max << " ";
            std::cout.flush();
        }
        std::cout << std::endl;
        std::cout.flush();
    }
}
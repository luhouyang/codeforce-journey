#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t, x, m, i;

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    // cin >> t;
    scanf("%lld", &t);

    while (t--)
    {
        // cin >> x >> m;
        scanf("%lld%lld", &x, &m);

        int sm = 0;
        int lm = 2 * x;

        for (i = 1; i <= m && i <= lm; i++)
        {
            if (x != i)
            {
                if (!(x % (i ^ x)) || !(i % (i ^ x)))
                {
                    sm++;
                }
            }
        }

        // if (m >= x)
        // {
        //     for (i = 1; i < x; i++)
        //     {

        //         if (!(x % (x ^ i)))
        //         {
        //             sm++;
        //         }
        //         else if (!(i % (x ^ i)))
        //         {
        //             sm++;
        //         }
        //     }

        //     for (++i; i <= m; i++)
        //     {

        //         if (!(i % (x ^ i)))
        //         {
        //             sm++;
        //         }
        //         else if (!(x % (x ^ i)))
        //         {
        //             sm++;
        //         }
        //     }
        // }
        // else
        // {
        //     for (i = 1; i <= m; i++)
        //     {

        //         if (!(x % (x ^ i)))
        //         {
        //             sm++;
        //         }
        //         else if (!(i % (x ^ i)))
        //         {
        //             sm++;
        //         }
        //     }
        // }

        // cout << sm << '\n';
        printf("%d\n", sm);
    }
}
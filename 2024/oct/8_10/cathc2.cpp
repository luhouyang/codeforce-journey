#include <iostream>

#define ll long long

ll n, m1, m2, qi, l, r, mid, mx, mn = 10e9 + 1;
int t, m, q, i;
ll range[2] = {0};

void binarySearch(ll arr[])
{
    l = 0;
    r = m - 1;

    while (true)
    {
        mid = l + (r - l) / 2;

        if (qi < arr[mid])
        {
            if (qi > arr[mid - 1])
            {
                range[0] = arr[mid - 1];
                range[1] = arr[mid];
                return;
            }
            r = mid - 1;
        }
        else
        {
            if (qi > arr[mid + 1])
            {
                range[0] = arr[mid];
                range[1] = arr[mid + 1];
                return;
            }
            l = mid + 1;
        }
    }
}

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld%d%d", &n, &m, &q);

        ll classroom[m] = {0};

        for (i = 0; i < m; i++)
        {
            scanf("%lld", &classroom[i]);

            mn = std::min(mn, classroom[i]);
            mx = std::max(mx, classroom[i]);
        }

        while (q--)
        {
            scanf("%lld", &qi);

            if (qi < mn)
            {
                printf("%lld\n", (mn - 1));
            }
            else if (qi > mx)
            {
                printf("%lld\n", (n - mx));
            }
            else
            {
                // perform binary search for m1, m2
                binarySearch(classroom);

                mid = (range[1] + range[0]) / 2;
                ll ans = std::min(mid - std::min(range[0], range[1]), std::max(range[0], range[1]) - mid);

                printf("%lld\n", ans);
            }
        }
    }
}
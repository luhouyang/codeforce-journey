#include "bits/stdc++.h"
std::mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
const int V = 2e5 + 5;
uint64_t h[5 * V], p[V];
int t, n, q, l, r, x, i;
int main()
{
    for (i = 0; i < 5 * V; i++)
        h[i] = rng();
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &q);
        for (i = 0; i < n; i++)
            scanf("%d", &x), p[i + 1] = p[i] ^ h[--x];
        while (q--)
            scanf("%d%d", &l, &r), puts(p[l - 1] ^ p[r] ? "NO" : "YES");
    }
}
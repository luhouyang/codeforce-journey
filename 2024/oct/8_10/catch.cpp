#include <iostream>

#define ll long long

ll n, q, m1, m2;
int t, m, nq;

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld%d%d%lld%lld%lld", &n, &m, &nq, &m1, &m2, &q);

        if (q < m1 && q < m2)
        {
            printf("%lld\n", (std::min(m1, m2) - 1));
        }
        else if (q > m1 && q > m2)
        {
            printf("%lld\n", (n - std::max(m1, m2)));
        }
        else
        {
            ll mid = (m2 + m1) / 2;
            ll mn = std::min(mid - std::min(m1, m2), std::max(m1, m2) - mid);

            printf("%lld\n", mn);
        }
    }
}

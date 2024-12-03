#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t;
ll w, b;

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld%lld", &w, &b);

        ll sr = 0;

        if (w == 0 && b == 0)
        {
        }
        else
        {
            if (w > b)
            {
                swap(w, b);
            }

            ll nw = 0;
            if (w == 0)
            {
                ll nb = ceil((sqrt(8.0 * b) - 1.0) / (2.0));
                ll s = (1 + nb) * nb / 2;
                if (b % s == b)
                {
                    sr = nw + nb - 1;
                }
                else
                {
                    sr = nw + nb;
                }
            }
            else
            {
                nw = ceil((sqrt(8.0 * w) - 1.0) / 2.0);
                ll s = (1 + nw) * nw / 2;
                if (w % s == w)
                {
                    // skip one line
                    // a for black will start at nw, skip nw + 1
                    sr += nw;
                    b -= nw;
                    ll nb = ceil((sqrt(4.0 * (nw + 2) * b) - 1.0) / (2.0 * (nw + 2)));

                    s = (1 + nb) * nb / 2 + nw;
                    if (b % s == b)
                    {
                        sr += nb - 1;
                    }
                    else
                    {
                        sr += nb;
                    }
                }
                else
                {
                    // a for black will start at nw + 1
                    nw--;
                    ll nb = ceil((sqrt(4.0 * (nw + 1) * b) - 1.0) / (2.0 * (nw + 1)));
                    sr += nw;

                    s = (1 + nb) * nb / 2;
                    if (b % s == b)
                    {
                        sr += nb - 1;
                    }
                    else
                    {
                        sr += nb;
                    }
                }
            }
        }

        printf("%lld\n", sr);
    }
}
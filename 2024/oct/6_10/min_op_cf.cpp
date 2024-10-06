#include <iostream>

using ll = long long;

ll n, k, pw;
int c, p, t, i;

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld%lld", &n, &k);

        if (n < k || k == 1)
        {
            printf("%lld\n", n);
        }
        else if (n == k)
        {
            printf("%d\n", 1);
        }
        else
        {
            pw = 1;
            c = 0;
            p = 1;

            while (true)
            {
                pw = pw * k;
                if (n >= pw)
                {
                    p++;
                }
                else
                {
                    break;
                }
            }

            for (i = 0; i <= p; i++)
            {
                c += n / pw;
                n = n % pw;
                pw = pw / k;

                if (n <= 0)
                {
                    break;
                }
            }

            printf("%d\n", c);
        }
    }
}
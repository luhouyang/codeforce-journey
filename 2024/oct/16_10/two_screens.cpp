#include <bits/stdc++.h>

int t, i;
std::string a, b;

int main()
{

    scanf("%d", &t);

    while (t--)
    {
        std::cin >> a >> b;
        int al = a.length(), bl = b.length();
        int c = 0, n = 0;

        if (al < bl)
        {
            for (i = 0; i < al; i++)
            {
                if (a[i] ^ b[i])
                {
                    break;
                }
                else
                {
                    c++;
                }
            }
        }
        else
        {
            for (i = 0; i < bl; i++)
            {
                if (a[i] ^ b[i])
                {
                    break;
                }
                else
                {
                    c++;
                }
            }
        }

        if (c != 0)
        {
            n = (al - c) + (bl - c) + c + 1;
        }
        else
        {
            n = al + bl;
        }

        printf("%d\n", n);
    }

HouYang:;
    return 0;
}
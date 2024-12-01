#include <bits/stdc++.h>

using namespace std;

int t, n, i;

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        if (n > 4)
        {
            printf("%d ", 2);
            for (i = 6; i <= n; i += 2)
            {
                printf("%d ", i);
            }
            printf("%d %d ",4 , 5);
            if (n % 2 == 0)
            {
                n = n - 1;
            }
            for (i = n; i >= 7; i -= 2)
            {
                printf("%d ", i);
            }
            printf("%d %d\n", 3, 1);
        }
        else
        {
            printf("%d\n", -1);
        }
        // bool prm1 = true;
        // int n1 = 2 * n - 1;
        // int sn1 = sqrt(n1);

        // for (i = 2; i <= sn1; i++)
        // {
        //     if (n1 % i == 0)
        //     {
        //         prm1 = false;
        //         break;
        //     }
        // }
        // bool prm2 = true;

        // int n1 = n + 1;
        // int sn1 = sqrt(n1);

        // int n2 = n + 2;
        // int sn2 = sqrt(n2);

        // for (i = 2; i <= sn1; i++)
        // {
        //     if (n1 % i == 0)
        //     {
        //         prm1 = false;
        //         break;
        //     }
        // }

        // for (i = 2; i <= sn2; i++)
        // {
        //     if (n2 % i == 0)
        //     {
        //         prm2 = false;
        //         break;
        //     }
        // }

        // if (prm1 || prm2)
        // if (prm1)
        // {
        //     printf("%d\n", -1);
        // }
        // else
        // {
        //     // int hlf = n / 2;
        //     for (i = 2; i <= n; i+=2)
        //     {
        //         printf("%d ", i);
        //     }
        //     // if (n % 2 == 1)
        //     // {
        //     //     printf("%d", hlf + 1);
        //     // }
        //     int str = 0;
        //     if (n%2==0) {
        //         str = n-1;
        //     } else {
        //         str = n;
        //     }
        //     for (i = str; i >= 1; i-=2)
        //     {
        //         printf("%d ", i);
        //     }
        //     printf("\n");
        // }
    }
}
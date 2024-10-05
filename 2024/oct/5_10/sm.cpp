#include <iostream>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);

        int m = std::ceil(1.0*(n-1)/(k-1));

        printf("%d\n", m);
    }
}
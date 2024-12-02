#include <bits/stdc++.h>

using namespace std;

int t, a, b;

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &a, &b);

        int cm = std::__gcd(a, b);

        printf("%d\n", (a*b)/cm);
    }
}
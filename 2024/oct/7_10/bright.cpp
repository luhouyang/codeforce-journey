#include <iostream>
#include <math.h>

#define ll long long

ll k, ans, sq_k, sq_ans;
int t;

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld", &k);
        sq_k = std::sqrt(k);
        ans = k + sq_k;
        sq_ans = std::sqrt(ans);
        printf("%lld\n", (ans + (sq_ans > sq_k ? 1 : 0)));
    }
}
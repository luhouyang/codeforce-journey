#include <cstdio>
#include <algorithm>

const int A(1e5 + 10);
char s[2][A];
int a[A], dp[A][3], T, n;

bool check(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return (s[x1][y1] == 'A') + (s[x2][y2] == 'A') + (s[x3][y3] == 'A') > 1;
}
int main()
{
    for (scanf("%d", &T); T--;)
    {
        scanf("%d%s%s", &n, s[0] + 5, s[1] + 5);
        for (int i(5), cc(n + 5); i < cc; ++i)
        {
            dp[i][0] = std::max(dp[i - 3][0] + check(0, i - 2, 0, i - 1, 0, i) + check(1, i - 3, 1, i - 2, 1, i - 1), dp[i - 2][1] + check(0, i - 1, 1, i - 1, 0, i));
            dp[i][1] = std::max({dp[i - 1][0] + check(1, i - 1, 0, i, 1, i), dp[i - 2][2] + check(0, i - 1, 0, i, 1, i), dp[i - 3][1] + check(0, i - 2, 0, i - 1, 0, i) + check(1, i - 2, 1, i - 1, 1, i)});
            dp[i][2] = std::max(dp[i - 3][2] + check(0, i - 2, 0, i - 1, 0, i) + check(1, i - 1, 1, i, 1, i + 1), dp[i - 1][1] + check(0, i, 1, i, 1, i + 1));
        }
        printf("%d\n", dp[n + 4][1]);
    }
    return 0;
}
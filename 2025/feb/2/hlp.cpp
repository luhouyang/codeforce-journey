#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define ll long long
#define getchar() (p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, 1 << 21, stdin), p1 == p2) ? EOF : *p1++)
using namespace std;
const int N = 5e5 + 5;
int a[N], n;
char buf[1 << 21], *p1, *p2;
inline int rd()
{
    char c;
    int f = 1;
    while (!isdigit(c = getchar()))
        if (c == '-')
            f = -1;
    int x = c - '0';
    while (isdigit(c = getchar()))
        x = x * 10 + (c ^ 48);
    return x * f;
}
int main()
{
    for (int t = rd(); t--;)
    {
        n = rd();
        bool flag = 1;
        for (int i = 1; i <= n; i++)
        {
            int x = rd();
            if (x <= 2 * max(i - 1, n - i))
                flag = 0;
        }
        puts(flag ? "YES" : "NO");
    }
    return 0;
}
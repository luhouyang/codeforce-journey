#include <bits/stdc++.h>

#define ll long long

const ll N = 2e5 + 10, V = 2e5, mod = 998244353, INF = 0x3f3f3f3f3f3f3f;
char s[N];
namespace Fast_IO
{
    static char buf[1000000], *paa = buf, *pd = buf, out[10000000];
    ll length = 0;
#define getchar() paa == pd && (pd = (paa = buf) + fread(buf, 1, 1000000, stdin), paa == pd) ? EOF : *paa++
    inline ll read()
    {
        ll x(0), t(1);
        char fc(getchar());
        while (!isdigit(fc))
        {
            if (fc == '-')
                t = -1;
            fc = getchar();
        }
        while (isdigit(fc))
            x = (x << 1) + (x << 3) + (fc ^ 48), fc = getchar();
        return x * t;
    }
    inline void flush()
    {
        fwrite(out, 1, length, stdout);
        length = 0;
    }
    inline void put(char c)
    {
        if (length == 9999999)
            flush();
        out[length++] = c;
    }
    inline void put(std::string s)
    {
        for (char c : s)
            put(c);
    }
    inline void print(ll x)
    {
        if (x < 0)
            put('-'), x = -x;
        if (x > 9)
            print(x / 10);
        put(x % 10 + '0');
    }
    inline bool chk(char c) { return !((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '.' || c == '#'); }
    inline bool ck(char c) { return c != '\n' && c != '\r' && c != -1 && c != ' '; }
    inline void rd(char s[], ll &n)
    {
        s[++n] = getchar();
        while (chk(s[n]))
            s[n] = getchar();
        while (ck(s[n]))
            s[++n] = getchar();
        n--;
    }
}
using namespace Fast_IO;

int t, n, m, q, b[100005], a;

int main()
{
    // scanf("%d", &t);
    t = read();

    while (t--)
    {
        // scanf("%d%d%d", &n, &m, &q);
        n = read();
        m = read();
        q = read();

        for (int i = 1; i <= m; i++)
            // scanf("%d", &b[i]);
            b[i] = read();

        std::sort(b + 1, b + m + 1);

        while (q--)
        {
            // scanf("%d", &a);
            a = read();

            if (a < b[1])
            // printf("%d\n", (b[1] - 1));
            {
                print(b[1] - 1);
                put('\n');
            }
            else if (a > b[m])
            // printf("%d\n", (n - b[m]));
            {
                print(n - b[m]);
                put('\n');
            }
            else
            {
                int x = std::upper_bound(b + 1, b + m + 1, a) - b;
                // printf("%d\n", ((b[x] - b[x - 1]) / 2));
                print((b[x] - b[x - 1]) / 2);
                put('\n');
            }
        }
    }

    flush();
    return 0;
}
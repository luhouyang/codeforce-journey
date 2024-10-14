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

int t, n, i, j;

signed main()
{
    // t = read();
    std::cin >> t;

    while (t--)
    {
        // n = read();
        std::cin >> n;

        std::string in;
        std::cin >> in;

        // int c = 0;
        bool same = false;
        char matcher = in[0];

        for (i = 0; i < n - 1; i++)
        {

            if (matcher == in[i + 1])
            {
                // c++;

                // if (c == 1)
                // {
                //     c = 0;

                for (j = i + 2; j < n; j++)
                {
                    if (in[j] != matcher)
                    {
                        in[i+1] = in[j];
                        in[j] = matcher;
                        break;
                    }
                    else if (j + 1 == n)
                    {
                        same = true;
                    }
                }

                if (same)
                {
                    break;
                }
                // }
            }
            else
            {
                // c = 0;
                matcher = in[i + 1];
            }
        }

        // put(in);
        // put('\n');
        std::cout << in << std::endl;
    }

HouYang:;
    flush();
    return 0;
}
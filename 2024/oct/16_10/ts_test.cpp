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
    // Function to read string, not space efficient
    inline std::string read_string()
    {
        std::string result;
        char fc(getchar());
        // Skip any non-alphabetic characters initially
        while (!isalpha(fc) && fc != EOF)
        {
            fc = getchar();
        }
        // Append alphabetic characters to the string
        while (isalpha(fc) && fc != EOF)
        {
            result += fc;
            fc = getchar();
        }
        return result;
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

int t;
std::string a, b;

signed main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // t = read();
    scanf("%d", &t);

    while (t--)
    {
        // a = read_string();
        // b = read_string();
        std::cin >> a >> b;

        if (a.size() > b.size())
        {
            std::swap(a, b);
        }

        int al = a.size(), bl = b.size(); // [46 ms]
        // int al = a.length(), bl = b.length(); // [62 ms]

        int i = 0;
        for (; i < al; i++)
        {
            if (a[i] != b[i])
            {
                break;
            }
        }
        bl += std::min(al - i + 1, al);
        // print((bl + std::min(al - i + 1, al)));
        printf("%d\n", bl);

        // if (al < bl)
        // {
        //     i = 0;
        //     for (; i < al; i++)
        //     {
        //         if (a[i] != b[i])
        //         {
        //             break;
        //         }
        //     }
        //     // print((bl + std::min(al - i + 1, al)));
        //     printf("%d\n", (bl + std::min(al - i + 1, al)));
        // }
        // else
        // {
        //     i = 0;
        //     for (; i < bl; i++)
        //     {
        //         if (a[i] != b[i])
        //         {
        //             break;
        //         }
        //     }
        //     // print((al + std::min(bl - i + 1, bl)));
        //     printf("%d\n", (al + std::min(bl - i + 1, bl)));
        // }

        // put('\n');
    }

HouYang:;
    // flush();
    return 0;
}
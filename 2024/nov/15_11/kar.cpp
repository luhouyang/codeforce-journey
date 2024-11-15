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
// using namespace std;
int t, n, x, a, i, j, c, d, stp;

signed main()
{

    t = read();
    // cin >> t;

    while (t--)
    {
        // ios::sync_with_stdio(0);
        // cin.tie(0);
        n = read();
        x = read();
        // cin >> n >> x;

        int kars[n] = {0};

        for (i = 0; i < n; i++)
        {
            a = read();
            kars[i] = a;
            // cin >> kars[i];
        }

        std::sort(kars, kars + n);

        i = 0, j = n - 1, d = 0, stp = 0;
        while (j >= 0)
        {
            for (c = 1; c <= x && (j - c) > 0; c++)
            {
                d += kars[j] - kars[j - c];
            }
            stp += kars[j];
            i = j - x - 1;
            while (i >= 0)
            {
                if (d > kars[i])
                {
                    d -= kars[i];
                    i--;
                }
                else
                {
                    break;
                }
            }

            j = i;
            int ii = 0;
            while (d > 0 && j > 0)
            {
                kars[j - ii]--;
                d--;
                ii = (ii + 1) % j;
            }
        }

        print(stp);
        put('\n');
        // cout << stp << endl;
    }

HouYang:;
    flush();
    return 0;
}
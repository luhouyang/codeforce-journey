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
        while (isalpha(fc))
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

// int t;
// int rr[4];

// signed main()
// {

//     t = read();

//     while (t--)
//     {
//         rr[0] = read();
//         rr[1] = read();
//         rr[2] = read();
//         rr[3] = read();

//         // std::sort(std::begin(rr), std::end(rr));

//         // print(((rr[0] ^ rr[1] ? 1 : 0) + (rr[2] - rr[1]) + (rr[2] ^ rr[3] ? 1 : 0)));
//         put('\n');
//     }
int t, l, r, L, R;

signed main()
{

    t = read();

    while (t--)
    {
        l = read();
        r = read();
        L = read();
        R = read();

        if (l > L)
        {
            std::swap(l, L);
            std::swap(r, R);
        }
        if (r < L)
        {
            print(1);
            put('\n');
        }
        else
        {
            int UBR = std::max(l, L);
            int LBR = std::min(r, R);

            int range = LBR - UBR;

            if (std::min(l, L) != UBR)
            {
                range++;
            }

            if (std::max(r, R) != LBR)
            {
                range++;
            }

            print(range);
            put('\n');
        }
    }

HouYang:;
    flush();
    return 0;
}
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

using namespace std;

int t, n, m, i, j;
// string str;

signed main()
{

    // t = read();
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        // n = read();
        // m = read();
        cin >> n >> m;

        string str_in[n];

        for (i = 0; i < n; i++)
        {
            // str = read_string();
            cin >> str_in[i];
        }

        int sm = min(n, m);
        sm /= 2;

        string str_arr[sm];

        // m outside
        for (i = 0; i < sm; i++)
        {
            int backm = m - i - 1;
            int backn = n - i - 1;

            string ftemp = str_in[i].substr(i, m - i * 2);
            string etemp = str_in[backn].substr(i, m - i * 2);
            reverse(etemp.begin(), etemp.end());

            string btemp = "";

            int l = ((n - 2) - i);
            for (j = i + 1; j <= l; j++)
            {
                ftemp += str_in[j][backm];
                btemp += str_in[j][i];
            }

            reverse(btemp.begin(), btemp.end());

            ftemp += etemp + btemp;

            ftemp += ftemp.substr(0, 3);

            str_arr[i] = ftemp;
            // cout << ftemp << endl;
            // put(ftemp);
            // put('\n');
        }

        int sr = 0;
        while (sm--)
        {
            j = str_arr[sm].size() - 3;

            for (i = 0; i < j; i++)
            {
                if (str_arr[sm].substr(i, 4) == "1543")
                {
                    sr++;
                }
            }
        }

        cout << sr << endl;
    }

HouYang:;
    // flush();
    return 0;
}
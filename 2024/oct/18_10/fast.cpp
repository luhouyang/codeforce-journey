#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define int long long
namespace fast_IO
{
#define IOSIZE 100000
    //	int precision = 3, POW[10] = {1, 10, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8, 1e9};	// 四舍五入到第precision位
    char ibuf[IOSIZE], obuf[IOSIZE], *p1 = ibuf, *p2 = ibuf, *p3 = obuf;
#ifdef ONLINE_JUDGE
#define getchar() ((p1 == p2) and (p2 = (p1 = ibuf) + fread(ibuf, 1, IOSIZE, stdin), p1 == p2) ? (EOF) : (*p1++))
#endif
#define putchar(x) ((p3 == obuf + IOSIZE) && (fwrite(obuf, p3 - obuf, 1, stdout), p3 = obuf), *p3++ = x)
#define isdigit(ch) (ch > 47 && ch < 58)
#define isspace(ch) (ch < 33)
    template <typename T>
    inline T read()
    {
        T s = 0;
        int w = 1;
        char ch;
        while (ch = getchar(), !isdigit(ch) and (ch != EOF))
            if (ch == '-')
                w = -1;
        if (ch == EOF)
            return false;
        while (isdigit(ch))
            s = s * 10 + ch - 48, ch = getchar();
        return s * w;
    }
    template <typename T>
    inline bool read(T &s)
    {
        s = 0;
        int w = 1;
        char ch;
        while (ch = getchar(), !isdigit(ch) and (ch != EOF))
            if (ch == '-')
                w = -1;
        if (ch == EOF)
            return false;
        while (isdigit(ch))
            s = s * 10 + ch - 48, ch = getchar();
        return s *= w, true;
    }
    template <typename T>
    inline void print(T x)
    {
        if (x < 0)
            putchar('-'), x = -x;
        if (x > 9)
            print(x / 10);
        putchar(x % 10 + 48);
    }
    inline bool read(char &s)
    {
        while (s = getchar(), isspace(s))
            ;
        return true;
    }
    inline bool read(char *s)
    {
        char ch;
        while (ch = getchar(), isspace(ch))
            ;
        if (ch == EOF)
            return false;
        while (!isspace(ch))
            *s++ = ch, ch = getchar();
        *s = '\000';
        return true;
    }
    inline void print(char x) { putchar(x); }
    inline void print(char *x)
    {
        while (*x)
            putchar(*x++);
    }
    inline void print(const char *x)
    {
        for (int i = 0; x[i]; i++)
            putchar(x[i]);
    }
    inline bool read(std::string &s)
    {
        s = "";
        char ch;
        while (ch = getchar(), isspace(ch))
            ;
        if (ch == EOF)
            return false;
        while (!isspace(ch))
            s += ch, ch = getchar();
        return true;
    }
    inline void print(std::string x)
    {
        for (int i = 0, n = x.size(); i < n; i++)
            putchar(x[i]);
    }
    inline bool read(bool &b)
    {
        char ch;
        while (ch = getchar(), isspace(ch))
            ;
        b = ch ^ 48;
        return true;
    }
    inline void print(bool b) { putchar(b + 48); }
    //	inline bool read(double &x) { int a = 0, b = 0; char ch = getchar(); bool f = 0; while(ch<48 || ch>=57) { if(ch == '-')	f = 1; ch = getchar(); } while(48<=ch && ch<=57) { a = (a<<1) + (a<<3) + (ch^48); ch = getchar(); } if(ch != '.') { x = (f ?-a :a); return 1; } ch = getchar(); while(48<=ch && ch<=57) { b = (b<<1) + (b<<3)  +(ch^48), ch = getchar(); } x = b; while(x > 1) x /= 10; x = (f ?-a-x :a+x); return 1; }
    //	inline void print(double x) { if(x<0) { putchar('-'), x=-x; } x=round((long double)x*pow(10, precision))/pow(10, precision), print((long long)x), putchar('.'), x-=(long long)(x); for(int i=1; i<=precision; i++)	x *= 10, putchar(x+48), x -= (int)x; }
    template <typename T, typename... T1>
    inline int read(T &a, T1 &...other) { return read(a) + read(other...); }
    template <typename T, typename... T1>
    inline void print(T a, T1... other) { print(a), print(other...); }
    struct Fast_IO
    {
        ~Fast_IO() { fwrite(obuf, p3 - obuf, 1, stdout); }
    } io;
    template <typename T>
    Fast_IO &operator>>(Fast_IO &io, T &b) { return read(b), io; }
    template <typename T>
    Fast_IO &operator<<(Fast_IO &io, T b) { return print(b), io; }
#define cout io
#define cin io
#define endl '\n'
}
using namespace fast_IO;
using namespace std;

const int N = 2e5;
int n, k;
int a[N + 10];

inline void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int ans = 0;
    for (int r = 1, l = 1; r <= n; r++)
    {
        if (a[r] - a[r - 1] >= 2)
            l = r;
        while (a[r] - a[l] + 1 > k)
            l++;
        ans = max(ans, r - l + 1);
    }
    cout << ans << '\n';
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
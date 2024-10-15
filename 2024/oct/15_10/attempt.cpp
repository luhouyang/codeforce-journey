#include <bits/stdc++.h>

#define ll long long

// const ll N = 2e5 + 10, V = 2e5, mod = 998244353, INF = 0x3f3f3f3f3f3f3f;
// char s[N];
// namespace Fast_IO
// {
//     static char buf[1000000], *paa = buf, *pd = buf, out[10000000];
//     ll length = 0;
// #define getchar() paa == pd && (pd = (paa = buf) + fread(buf, 1, 1000000, stdin), paa == pd) ? EOF : *paa++
//     inline ll read()
//     {
//         ll x(0), t(1);
//         char fc(getchar());
//         while (!isdigit(fc))
//         {
//             if (fc == '-')
//                 t = -1;
//             fc = getchar();
//         }
//         while (isdigit(fc))
//             x = (x << 1) + (x << 3) + (fc ^ 48), fc = getchar();
//         return x * t;
//     }
//     // Function to read string, not space efficient
//     inline std::string read_string()
//     {
//         std::string result;
//         char fc(getchar());
//         // Skip any non-alphabetic characters initially
//         while (!isalpha(fc) && fc != EOF)
//         {
//             fc = getchar();
//         }
//         // Append alphabetic characters to the string
//         while (isalpha(fc))
//         {
//             result += fc;
//             fc = getchar();
//         }
//         return result;
//     }
//     inline void flush()
//     {
//         fwrite(out, 1, length, stdout);
//         length = 0;
//     }
//     inline void put(char c)
//     {
//         if (length == 9999999)
//             flush();
//         out[length++] = c;
//     }
//     inline void put(std::string s)
//     {
//         for (char c : s)
//             put(c);
//     }
//     inline void print(ll x)
//     {
//         if (x < 0)
//             put('-'), x = -x;
//         if (x > 9)
//             print(x / 10);
//         put(x % 10 + '0');
//     }
//     inline bool chk(char c) { return !((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '.' || c == '#'); }
//     inline bool ck(char c) { return c != '\n' && c != '\r' && c != -1 && c != ' '; }
//     inline void rd(char s[], ll &n)
//     {
//         s[++n] = getchar();
//         while (chk(s[n]))
//             s[n] = getchar();
//         while (ck(s[n]))
//             s[++n] = getchar();
//         n--;
//     }
// }
// using namespace Fast_IO;

/*
// UNCOMMENT TO TEST EXECUTION TIME
#include <chrono>
using namespace std::chrono;

void getExecTime(void (*func)()) {
    auto start = high_resolution_clock::now();

    // call function here
    func();

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    std::cout << duration.count() << " ms" << std::endl;
}

void fastIO() {
    // int a = read();
    int a = 123;
    print(a); put('\n');
}

void stdIO() {
    int a = 123;
    // std::cin >> a;
    std::cout << a << std::endl;
}
*/

#include <vector>

int t, n, i, a;
std::string st;

signed main()
{

    // code goes here
    // getExecTime(&fastIO);
    // getExecTime(&stdIO);
    // t = read();
    scanf("%d", &t);

    while (t--)
    {
        // n = read();
        scanf("%d", &n);

        std::vector<int> p(n + 1), visited(n + 1, 0), results(n + 1, 0);

        for (i = 1; i <= n; i++)
        {
            // a = read();
            // p[i] = a;
            scanf("%d", &p[i]);
        }

        // st = read_string();
        // char st[n + 1];
        // fgets(st, n + 1, stdin);
        std::cin >> st;

        for (i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                std::vector<int> cycle;
                int cu = i;
                while (!visited[cu])
                {
                    visited[cu] = 1;
                    cycle.push_back(cu);
                    cu = p[cu];
                }

                int blk = 0;
                for (int in_cycle : cycle)
                {
                    if (st[in_cycle - 1] == '0')
                    {
                        blk++;
                    }
                }

                for (int id : cycle)
                {
                    results[id] = blk;
                }
            }
        }

        for (i = 1; i <= n; i++)
        {
            // print(results[i]);
            // put(' ');
            printf("%d ", results[i]);
        }
        // put('\n');
        std::cout << '\n';
    }

HouYang:;
    // flush();
    return 0;
}
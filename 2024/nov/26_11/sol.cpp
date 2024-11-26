#include <bits/stdc++.h>
using namespace std;
string s;
void work()
{
    cin >> s;
    for (int i = 1; i < s.length(); i++)
        if (s[i] == s[i - 1])
        {
            printf("%c%c\n", s[i - 1], s[i]);
            return;
        }
    for (int i = 2; i < s.length(); i++)
        if (s[i] != s[i - 2])
        {
            printf("%c%c%c\n", s[i - 2], s[i - 1], s[i]);
            return;
        }
    printf("-1\n");
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        work();
    return 0;
}
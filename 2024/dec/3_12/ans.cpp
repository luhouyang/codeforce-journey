#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    long long b, w;
    while (t--)
    {
        cin >> b >> w;

        cout << floor((sqrt((b + w) * 8 + 1) - 1) / 2) << endl;
    }
}
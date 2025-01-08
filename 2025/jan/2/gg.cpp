#include <bits/stdc++.h>
#include <map>
#include <vector>
#define ll long long

using namespace std;

int n, k, t;
ll a;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        map<int, int> m;

        int l = n;

        while (l--)
        {
            cin >> a;
            if (m.find(a) == m.end())
            {
                m[a] = 1;
            }
            else
            {
                m[a]++;
            }
        }

        vector<int> arr;

        for (const auto &[x, v] : m)
        {
            arr.push_back(v);
        }

        sort(arr.begin(), arr.end());

        int c = arr.size();

        for (int i = 0; i < arr.size(); i++)
        {
            k -= arr[i];
            if (k >= 0)
            {
                c--;
            }
            else
            {
                break;
            }
        }

        cout << max(1, c) << '\n';
    }
}
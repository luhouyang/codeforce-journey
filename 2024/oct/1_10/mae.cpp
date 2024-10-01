#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n;

        map<int, int> f_map;

        int mf = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (f_map.find(x) == f_map.end())
            {
                f_map[x] = 1;
            }
            else
            {
                f_map[x]++;
            }

            mf = max(f_map[x], mf);
        }

        cout << (n - mf) << endl;
    }
}
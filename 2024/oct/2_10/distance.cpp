#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        if (k >= n && k >= m)
        {
            cout << (n * m) << endl;
        }
        else
        {
            int np = n - k;
            int mp = m - k;

            if (np <= 0)
            {
                np = 0;
            }

            if (mp <= 0)
            {
                mp = 0;
            }

            int min_n = min(m, k);
            int remain_n = min((n - np * 2), k);

            int borders = np * min_n;
            borders += mp * remain_n;
            
            int total = borders + (n * m - ((np * 2 * m) + (mp * (n - np * 2) * 2)));

            cout << total << endl;
        }
    }
}
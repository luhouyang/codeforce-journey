#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        // int nums[n] = {0};
        int x;
        int max = 0;
        int max_idx = 0;
        for (int i = 0; i < n; i++)
        {
            // cin >> nums[i];
            cin >> x;
            if (x > max)
            {
                max = x;
                max_idx = i;
            }
            else if (x >= max && i % 2 == 0)
            {
                max = x;
                max_idx = i;
            }
        }

        if (max_idx % 2 == 1)
        {
            int m = n / 2;
            cout << m + max << endl;
        }
        else
        {
            int m = n / 2;
            int r = n % 2;
            cout << m + r + max << endl;
        }
    }
}
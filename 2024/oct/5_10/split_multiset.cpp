#include <iostream>
#include <math.h>

using namespace std;

int split(int n, int k)
{
    if (n <= 1)
    {
        return 0;
    }
    else
    {
        int s = 0;
        int a = n / k;
        int r = n % k;
        for (int i = 1; i <= a; i++)
        {
            if (i == a)
            {
                s += split(a + r, k);
            }
            else
            {
                s += split(a, k);
            }
        }
        return s + 1;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            // int height = n / k;
            // int r = n % k;

            // int c = 1;
            // int sum = 1;

            // for (int i = 0; i < height/k; i++)
            // {
            //     c *= height;
            //     sum += c;
            // }

            // if (r != 0)
            // {
            //     sum += 1;
            // }

            cout << split(n, k) << endl;
        }
    }
}
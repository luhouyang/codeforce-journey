#include <iostream>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll wealth[n];
        ll sum = 0;
        ll max = 0;
        ll x;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
            if (x > max)
            {
                max = x;
            }
        }

        if (n == 1 || n == 2)
        {
            cout << -1 << endl;
        }
        else
        {
            ll ave = sum / n;

            int ad = max - ave;

            int hlf = 0;

            for (int i = 0; i < n; i++)
            {
                // cin >> x;

                // sum += x;
                if (wealth[i] <= ave)
                {
                    hlf++;
                }
            }

            if (hlf > ave)
            {
                int a = n - (max - ave);
                if (a >= 0)
                {
                    cout << a << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else
            {
                int a = n - (max - ave);
                if (a >= 0)
                {
                    cout << a << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
        }
    }
}
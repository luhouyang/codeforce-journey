#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0;
    cin >> t;

    while (t--)
    {
        int n = 0;
        cin >> n;

        int sum = 0;
        int num = 0;

        if (n == 0)
        {
        }
        else if (n == 1)
        {
            cin >> num;
            sum = num;
        }
        else if (n % 2 == 0)
        {
            n = n / 2;
            while (n--)
            {
                cin >> num;
                sum += num;

                cin >> num;
                sum -= num;
            }
        }
        else
        {
            n = n / 2;
            while (n--)
            {
                cin >> num;
                sum += num;

                cin >> num;
                sum -= num;
            }

            cin >> num;
            sum += num;
        }

        cout << sum << endl;
    }
}

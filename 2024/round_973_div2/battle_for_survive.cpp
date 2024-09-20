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

        long long arr[n] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long nsum = arr[n-2];
        for (int i = n - 3; i >= 0; i--)
        {
            nsum -= arr[i];
        }

        cout << (arr[n-1] - nsum) << endl;
    }
}
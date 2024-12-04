#include <bits/stdc++.h>

using namespace std;

int t, n, k, i, ans;

int main()
{
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &n, &k);

        int arr[n] = {0};

        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        sort(arr, arr + n);

        ans = 0;
        for (i = n - 1; i >= 0; i--)
        {
            k -= arr[i];
            if (k < 0)
            {
                ans = arr[i] + k;
                break;
            }
        }

        if (k > 0)
        {
            ans = k;
        }

        printf("%d\n", ans);
    }
}
#include <iostream>

// using namespace std;
int x, y, k, t, m1, m2;

int main()
{
    int t;
    scanf("%d", &t);
    // cin >> t;

    while (t--)
    {
        int x, y, k;
        scanf("%d%d%d", &x, &y, &k);
        // cin >> x >> y >> k;

        m1 = x / k;
        m2 = y / k;

        if (m1 * k < x)
        {
            m1++;
        }

        if (m2 * k < y)
        {
            m2++;
        }

        if (m2 >= m1)
        {
            printf("%d\n", (m2 * 2));
        }
        else
        {
            printf("%d\n", (m1 * 2 - 1));
        }
    }
}
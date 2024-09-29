#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n;
        vector<int> unsr;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            unsr.push_back(x);
        }

        sort(unsr.begin(), unsr.end(), std::greater<int>());

        while (!(unsr.size() == 1))
        {
            unsr.pop_back();
            if (!(unsr.size() == 1))
            {
                unsr.erase(unsr.begin());
            }
            else
            {
                break;
            }
        }

        cout << unsr[0] << endl;
    }
}
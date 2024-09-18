#include <iostream>

using namespace std;

int main()
{
    int n_case = 0;
    cin >> n_case;

    int n_num = 0;
    int prod = 1;
    while (n_case > 0)
    {
        prod = 1;

        cin >> n_num;

        int nums[n_num] = {0};
        int smallest_idx = 0;
        for (int i = 0; i < n_num; i++)
        {
            cin >> nums[i];

            if (nums[smallest_idx] > nums[i])
            {
                smallest_idx = i;
            }
        }

        nums[smallest_idx] += 1;

        while (n_num > 0)
        {
            n_num--;
            prod *= nums[n_num];
        }

        cout << prod << endl;

        n_case--;
    }
}
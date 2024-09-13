#include <iostream>

using namespace std;

int main()
{
    int n_cases = 0;
    int n_row = 0;
    int n_col = 0;

    int idx = 0;
    char to_match[4] = {'v', 'i', 'k', 'a'};

    cin >> n_cases;

    for (int i = 0; i < n_cases; i++)
    {
        idx = 0;
        cin >> n_row;
        cin >> n_col;

        char chrs[n_row][n_col + 1];

        for (int j = 0; j < n_row; j++)
        {
            cin >> chrs[j];
        }

        for (int j = 0; j < n_col; j++)
        {
            for (int c = 0; c < n_row; c++)
            {
                if (chrs[c][j] == to_match[idx])
                {
                    idx++;
                    break;
                }
            }

            if (idx == 4)
            {
                cout << "YES" << endl;
                break;
            }
        }

        if (idx < 4) {
            cout << "NO" << endl;
        }
    }
}
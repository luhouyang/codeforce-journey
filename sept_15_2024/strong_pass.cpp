#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int len = str.length();

        int insert_idx = 0;
        char insert_chr;
        if (str[0] == 'z')
        {
            insert_chr = 'a';
        }
        else
        {
            insert_chr = str[0] + 1;
        }

        for (int i = 1; i < len; i++)
        {
            if (str[i - 1] == str[i])
            {
                insert_idx = i;
                if (str[i] == 'z')
                {
                    insert_chr = 'a';
                }
                else
                {
                    insert_chr = str[i] + 1;
                }
                break;
            }
        }

        str.insert(insert_idx, 1, insert_chr);

        cout << str << endl;
    }
}
#include <iostream>

using namespace std;

string add(string a, string b)
{
    string result = "";
    int temp = 0;
    int size_a = a.size() - 1;
    int size_b = b.size() - 1;
    while (size_a >= 0 || size_b >= 0 || temp == 1)
    {
        temp += ((size_a >= 0) ? a[size_a] - '0' : 0);
        temp += ((size_b >= 0) ? b[size_b] - '0' : 0);
        result = char(temp % 2 + '0') + result;
        temp /= 2;
        size_a--;
        size_b--;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string str = "0";
        int lim = n * 2;
        int res;
        for (int i = 0; i < lim; i++)
        {
            int res = 0;
            cout << "? " + str << endl;
            fflush(stdout);
            cin >> res;

            if (res == -1)
            {
                return 0;
            }

            if (str.size() == n && res == 1)
            {
                cout << "! " + str << endl;
                break;
            }

            if (res == 1)
            {
                str += "0";
            }
            else
            {
                str = add(str, "1");
            }
        }
    }
}
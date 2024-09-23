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

        int m = n / 5;
        int r = n % 5;

        string a = string(m, 'a');
        string e = string(m, 'e');
        string i = string(m, 'i');
        string o = string(m, 'o');
        string u = string(m, 'u');

        if (r > 0)
        {
            a += "a";
            r--;
        }

        if (r > 0)
        {
            e += "e";
            r--;
        }

        if (r > 0)
        {
            i += "i";
            r--;
        }

        if (r > 0)
        {
            o += "o";
            r--;
        }

        if (r > 0)
        {
            u += "u";
            r--;
        }

        cout << a + e + i + o + u << endl;
    }
}
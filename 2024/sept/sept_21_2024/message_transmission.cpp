#include <iostream>

using namespace std;

int main()
{
    string instr;
    cin >> instr;
    bool found = false;

    int len = instr.size();

    string oristr;
    oristr += instr[0];

    for (int i = 1; i < len; i++)
    {
        if (found)
        {
            break;
        }

        cout << oristr << endl;

        oristr += instr[i];

        for (int j = 0; j < oristr.size(); j++)
        {
            if (oristr[j] == instr[i + j])
            {
                if ((i + j) == (len - 1))
                {
                    found = true;
                    break;
                }
            }
            else
            {
                break;
            }
        }
    }

    if (found)
    {
        cout << "YES" << endl
             << oristr;
    }
    else
    {
        cout << "NO";
    }
}
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int np, th;
        int gold = 0;
        int pp = 0;

        cin >> np >> th;

        while (np--) {
            int gold_a;
            cin >> gold_a;

            if (gold_a >= th) {
                gold += gold_a;
            } else if (gold_a == 0 && gold > 0) {
                gold--;
                pp++;
            }
        }

        cout << pp << endl;
    }
}
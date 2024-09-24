#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (s.size() < 3) {cout << "NO" << endl; } else if (s[0] != '1' || s[1] != '0') {
            cout << "NO" << endl;
        } else if (s[2] == '0') {cout << "NO" << endl;}
         else {
            s.erase(0, 2);

            if (stoi(s) >= 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
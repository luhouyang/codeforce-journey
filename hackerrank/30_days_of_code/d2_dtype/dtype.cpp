#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int iin;
    double din;
    string sin;

    cin >> iin >> din;
    cin.ignore();
    getline(cin, sin);

    cout << (iin + i) << endl;
    cout << setprecision(15) << (din + d)*1.0 << endl;
    cout << (s + sin) << endl;
}
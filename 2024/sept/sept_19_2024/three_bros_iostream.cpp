#include <iostream>

using namespace std;

int main() {
    int max = 6;

    int a, b = 0;

    cin >> a >> b;

    // cin.clear(); // 15ms, clears memory buffer

    cout << (max - a - b);
}
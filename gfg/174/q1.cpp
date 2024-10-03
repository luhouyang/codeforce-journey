#include <iostream>

using namespace std;

const unsigned int m = 1e9 + 7;

int dis(int n) {

    int l = 1;
    
    int sum = 0;
    for (int i=n; i>0; i--) {
        l = (l * i) % m;
        // cout << l << endl;

        // int lb = i;
        // int rb = n - i;

        
        // int r = 1;

        // for (int j = i; j >0; ) {}
    }

    return (l * (n - 1)) % m;
}

int main() {
    cout << dis(3);
}
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x, y = 0;
        cin >> n >> x >> y;

        double m = min(x, y) * 1.0;
        int output = ceil(n/m);

        cout << output << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, sm = 0, l = 0;

    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        if (sm < x) {
            sm += i;
            l++;
        } else {
            break; 
        }
    }

    if (sm >= x) {
        cout << l << endl;
    } else {
        for (int i = n - 1; i > 0; i--) {
            if (sm < x) {
                sm += i;
                l++;
            } else {
                break; 
            }
        }
        cout << l << endl;
    }
    
}
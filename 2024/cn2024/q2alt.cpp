#include<bits/stdc++.h>
#include<set>

using namespace std;

int t, a, b, c, d, i, j, k;
int arr[102][102] = {0};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    int sm = 0;

    while(t--) {
        cin >> a >> b >> c >> d;

        for (i = a; i < b; i++) {
            for (j = c; j < d; j++) {
                if (arr[i][j] == 0) {
                    arr[i][j] = 1;
                } else {
                    break;
                }
            }

            // k = j;

            for (j = d-1; j >= c; j--) {
                if (arr[i][j] == 0) {
                    arr[i][j] = 1;
                } else {
                    break;
                }
            }
        }
    }

    for (i = 0; i < 102; i++) {
        for (j = 0; j < 102; j++) {
            if (arr[i][j] == 1) {
                sm++;
            }
        }
    }

    cout << sm << '\n';
}
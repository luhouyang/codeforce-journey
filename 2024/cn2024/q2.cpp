#include<bits/stdc++.h>

using namespace std;

int t, a, b, c, d, i;
int arr_max[102]= {-1};
int arr_min[102]= {102};

int mnx = 102;
int mxx = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    int area = 0;

    while (t--) {
        cin >> a >> b >> c >> d;

        mnx = min(mnx, a);
        mxx = max(mxx, b);

        for (i=a; i<b; i++) {
            if (arr_min[i] > c) {
                arr_min[i] = c;
            }
            // cout << arr_min[i] << ' ';

            if (arr_max[i] < d) {
                arr_max[i] = d;
            }
            // cout << arr_max[i] << ' ';
        }
    }

    for (i=mnx; i<mxx; i++) {
            area += arr_max[i] - arr_min[i];
        }

    cout << area << '\n';
}
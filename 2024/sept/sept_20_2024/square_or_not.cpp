#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0;
    cin >> t;

    while (t--) {
        int n = 0;
        string str;
        cin >> n >> str;

        double s = sqrt(n);
        if (ceil(s) == floor(s)) {
            string edge = string(s, '1');
            string fill = "1" + string(s-2, '0') + "1";
            string match = edge;

            for (int i = 1; i<s-1; i++) {
                match += fill;
            }

            match += edge;

            if (match == str) {
                cout << "Yes" << endl;
            } else {
                cout <<  "No" << endl;
            }
            
        } else {
            cout << "No" << endl;
        }
    }
}
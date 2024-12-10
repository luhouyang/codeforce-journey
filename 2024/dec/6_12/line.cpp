#include<bits/stdc++.h>

using namespace std;

int t, n, m, i, ans;
string instr;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // scanf("%d", &t);
    cin>>t;

    while (t--) {
        // scanf("%d%d", &n, &m);
        cin>>n>>m;

        for (i=0; i<n;i++) {
            // scanf()
            cin>>instr;

            m -= instr.size();

            if (m <= 0) {
                ans = i +1; 
                for(;i<n;i++) {
                    cin >> instr;
                }
            }
        }

        cout << ans << '\n';
    }
}

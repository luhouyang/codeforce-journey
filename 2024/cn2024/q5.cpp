#include<bits/stdc++.h>
#include<set>
#include<vector>

using namespace std;

int t, n, x, y, a, i;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while(t--) {
        cin >> n >> x >> y;
        set<int[2]> aset;
        int gg[2] = {0};
        aset.emplace(gg);
        vector<int[2]> tmp;
        tmp.push_back(gg);

        while (n--) {
            cin >> a;

            int ss = tmp.size(); 
            
            for (i=0; i<ss; i++) {
                tmp.push_back(<int[]>{tmp[i][0]+=a, tmp[i][1]});
                tmp.push_back(<int[]>{tmp[i][0]-=a, tmp[i][1]});
                tmp.push_back(<int[]>{tmp[i][0], tmp[i][1]+=a});
                tmp.push_back(<int[]>{tmp[i][0], tmp[i][1]-=a});
            }

            if (tmp.find({x, y}) == tmp.end()) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }
}
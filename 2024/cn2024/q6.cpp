#include<bits/stdc++.h>
#include<math.h>

#define ll long long

using namespace std;

ll n, a, b;
const ll MOD = 10e9 + 7;

ll factorial(ll num) {
    if (num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll sm = 0;

    cin >> n;

    ll t = pow(2, n);

    ll hlf = t/2;
    ll cmphlf = hlf;
    ll n_sml = 0;
    ll n_big = 0;
    ll n_both = 0;

    while(hlf--) {
        cin >> a >> b;
        if (a < 0 || b< 0) {
            if (a == b) {
                n_both++;
            } else if (a > cmphlf || b > cmphlf) {
                n_big++;
            } else {
                n_sml++;
            } 
        }
    }

    // cout << n_both;

    n_big += n_both;
    n_sml += n_both;

    ll n_ways_big = factorial(n_big);
    ll n_ways_sml = factorial(n_sml);

    sm = (n_ways_big * n_ways_sml) % MOD;

    cout << sm << '\n';
}
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
    // ll sm_even = 0, sm_odd = 0;
    // ll n_morethanhlf = hlf, n_lessthanhlf = hlf;
    ll n_sml = 0;
    ll n_big = 0;
    ll n_both = 0;

    while(hlf--) {
        cin >> a >> b;
        if (a == b) {
            n_both++;
        } else if (a > cmphlf || b > cmphlf) {
                n_big++;
            } else {
                n_sml++;
            }
        // cout << a << ' ' << b << ' ' << cmphlf << '\n';
        // if (a & 1) {
        //     // odd
        //     if (a < 0) {
        //         sm_odd++;
        //     } else if (a > hlf) {
        //         n_morethanhlf--;
        //     } else {
        //         n_lessthanhlf--;
        //     }
        // } else {
        //     if (a < 0) {
        //         sm_even++;
        //     } else if (a > hlf) {
        //         n_morethanhlf--;
        //     } else {
        //         n_lessthanhlf--;
        //     }
        // }
    }

    cout << n_sml << ' ' << n_big << ' ' << n_both << '\n';

    n_big += n_both;
    n_sml += n_both;

    ll n_ways_big = factorial(n_big);
    ll n_ways_sml = factorial(n_sml);

    // while (n_big--) {
    //     n_ways_big *= n_big;
    // }

    // while (n_sml--) {
    //     n_ways_sml *= n_sml;
    // }

    sm = (n_ways_big * n_ways_sml) % MOD;

    cout << sm << '\n';
}
#include <bits/stdc++.h>
#include <vector>
#include <map>

#define ll long long
using namespace std;

const int displacement = 100000;
ll n, i, x, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<ll> leftset;
    vector<ll> rightset;
    map<ll, ll> pos_val;
    ll sm = 0;

    cin >> n;

    for (i = 0; i<n; i++) {
        cin >> x >> c;

        if (x < 0) {
            leftset.push_back(x);
        } else {
            rightset.push_back(x);
        }

        pos_val[x] = c;
    }

    sort(leftset.begin(), leftset.end());
    sort(rightset.begin(), rightset.end());

    if (leftset.size() > rightset.size()) {
        // start from left
        ll rs = rightset.size();
        ll ls = leftset.size();
        for (i = 0; i< rs; i++) {
            sm += pos_val[leftset[ls - i - 1]];
            sm += pos_val[rightset[i]];
        }
        sm += pos_val[leftset[rs]];
    } else if (leftset.size() < rightset.size()) {
        ll ls = leftset.size();
        for (i = 0; i< ls; i++) {
            sm += pos_val[leftset[i]];
            sm += pos_val[rightset[i]];
        }
        sm += pos_val[rightset[ls]];
    } else {
        // start from left
        ll ls = leftset.size();
        ll rs = rightset.size();
        for (i = 0; i < rs; i++) {
            sm += pos_val[leftset[ls - i - 1]];
            sm += pos_val[rightset[i]];
        }
        sm += pos_val[leftset[rs]];

        ll sma = 0;

        
        for (i = 0; i < ls; i++) {
            sma += pos_val[leftset[ls - i - 1]];
            sma += pos_val[rightset[i]];
        }
        sma += pos_val[rightset[ls]];

        sm = max(sm, sma);
    }

    cout << sm << endl;
}
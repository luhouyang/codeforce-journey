#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "/Library/debug/debug.h"
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
#define MAX                 2e9
#define MIN                 -2e9
#define PI                  acos(-1.0)
#define mid(s, e)           ((s) + ((e) - (s)) / 2)
#define clz(n)              __builtin_clzll(n)
#define nbOfBits(n)         __builtin_popcountll(n)
#define all(x)              (x).begin(), (x).end()
#define endl                '\n'
#define pb                  push_back
#define sz(a)               static_cast<int>((a).size())
#define int                 long long
#define double              long double
#define fi                  first
#define fill(n,arr) for(int i=1;i<=n;i++){ll x;cin>>x;arr.pb(x);}
#define se                  second
#define getunique(v)        {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define getorder(v)         sort(all(v))
#define getlower(s)         transform(s.begin(), s.end(), s.begin(), ::tolower)
#define getupper(s)         transform(s.begin(), s.end(), s.begin(), ::toupper)
#define reverse(s)          reverse(s.begin(), s.end())
 
using ll = long long;
using vi = vector<int>;
using vc = vector<char>;
using vvc = vector<vc>;
using vvi = vector<vi>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vd = vector<double>;
using vvd = vector<vd>;
using vs = vector<string>;
using pii = pair<int, int>;
using pdd = pair<double, double>;
using vpii = vector<pii>;
using vpdd = vector<pdd>;
using si = set<int>;
using ssi = set<si>;
using sb = set<bool>;
using ssb = set<sb>;
using msi = multiset<int>;
using sd = set<double>;
using ssd = set<sd>;
using ss = set<string>;
using sc = set<char>;
 
void solve() {
    int sum = 1;
    int a;cin>>a;
    vi b(a);
    for(int i=0;i<a;i++) cin>>b[i];
    int mn = *min_element(all(b));
    for(int i=0;i<a;i++){
        if(b[i] == mn){
            b[i] += 1;
            break;
        }
    }for(int i=0;i<a;i++){
        sum *= b[i];
    }
    cout<<sum<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
    solve();
    }
}
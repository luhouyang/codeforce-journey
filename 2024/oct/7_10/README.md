The final state of i
th bulb (on or off) is independent of n
.

Hint 2
The final state of the i
th bulb tells us about the parity of number of divisors of i
.

Solution
For any bulb i
, its final state depends on the parity of the number of divisors of i
. If i
 has an even number of divisors, then bulb i
 will be on; else it will be off. This translates to, if i
 is not a perfect square, bulb i
 will be on; else it will be off. So now the problem is to find the k
th number which is not a perfect square. This can be done by binary searching the value of n
 such that n−⌊n−−√⌋=k
 or the direct formula n
 = ⌊k+k−−√+0.5⌋
.

For the proof of the second formula you can refer this book page 141 E18

Code 1
```
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long k, l = 1, r = 2e18;
        cin >> k;
        while(r-l > 1){
            long long mid = (l+r)>>1;
            long long n = mid - int(sqrtl(mid));
            if(n >= k) r = mid;
            else l = mid;
        }
        cout << r << "\n";
    }
    return 0;
}
```

Code 2
```
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> k;
        cout << k + int(sqrtl(k) + 0.5) << "\n";
    }
    return 0;
}
```
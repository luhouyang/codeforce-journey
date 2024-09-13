#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // std::gcd
using namespace std;

class SegmentTree {
    vector<int> tree;
    int n;
    
public:
    SegmentTree(const vector<int>& arr) {
        n = arr.size();
        tree.resize(2 * n);
        
        // Build the segment tree
        for (int i = 0; i < n; ++i) {
            tree[n + i] = arr[i];  // Place original elements in leaves
        }
        for (int i = n - 1; i > 0; --i) {
            tree[i] = gcd(tree[2 * i], tree[2 * i + 1]);  // Build the tree upwards
        }
    }
    
    // Query GCD of range [l, r]
    int query(int l, int r) {
        int res = 0;
        l += n; r += n + 1;  // Shift the indices to the leaves
        while (l < r) {
            if (l & 1) res = gcd(res, tree[l++]);  // If l is odd, include it and move to the next
            if (r & 1) res = gcd(res, tree[--r]);  // If r is odd, move back and include it
            l /= 2; r /= 2;
        }
        return res;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    // Input the array
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Build a segment tree for GCD queries
    SegmentTree st(a);
    
    // Precompute prefix sums
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }
    
    long long result = 0;
    
    // Iterate over all starting points l
    for (int l = 0; l < n; ++l) {
        int lo = l, hi = n - 1, valid_r = l - 1;
        
        // Perform binary search to find the longest valid r
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            int current_gcd = st.query(l, mid);
            long long current_sum = prefix_sum[mid + 1] - prefix_sum[l];
            
            if (current_gcd <= current_sum) {
                valid_r = mid;  // This mid is valid, so try to extend further
                lo = mid + 1;
            } else {
                hi = mid - 1;  // This mid is not valid, so reduce the range
            }
        }
        
        // Add the number of valid intervals starting at l
        result += (valid_r - l + 1);
    }
    
    // Output the result
    cout << result << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Length of string
        string s;
        cin >> s;  // The string itself

        bool good_string = false;

        // We need to check for all possible valid partitions
        // For this problem, we only need to ensure no first and last character are the same
        set<pair<char, char>> partitions;

        // Checking for any valid partitioning of the string
        for (int i = 1; i < n; ++i) {
            char last_t1 = s[i - 1]; // Last char of t1
            char first_t2 = s[i]; // First char of t2
            
            if (last_t1 != first_t2) {
                good_string = true;
                break;
            }
        }

        if (good_string) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

#include <iostream>
#include <vector>

using namespace std;

vector<int> generatePermutation(int n) {
    if (n % 2 == 0) {
        return {};
    } else {
        vector<int> permutation;
        permutation.push_back(n);
        for (int i = 1; i < n; ++i) {
            permutation.push_back(i);
        }
        return permutation;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> result = generatePermutation(n);
        if (result.empty()) {
            cout << "-1\n";
        } else {
            for (int i = 0; i < result.size(); ++i) {
                if (i > 0) cout << " ";
                cout << result[i];
            }
            cout << "\n";
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<long long> b(n, 0);
        vector<long long> left(n, 0), right(n, 0);

        // Propagate values from left to right
        left[0] = a[0];
        for (int i = 1; i < n; ++i) {
            left[i] = (left[i - 1] / 2) + a[i];
        }

        // Propagate values from right to left
        right[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            right[i] = (right[i + 1] / 2) + a[i];
        }

        // Combine left and right propagation results
        for (int i = 0; i < n; ++i) {
            b[i] = max(left[i], right[i]);
        }

        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

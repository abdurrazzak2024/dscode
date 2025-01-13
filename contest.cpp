#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> impressions(n);
        vector<int> unique_points;

        for (int i = 0; i < n; i++) {
            cin >> impressions[i].first >> impressions[i].second;
            unique_points.push_back(impressions[i].first);
            unique_points.push_back(impressions[i].second);
        }

        // Coordinate compression
        sort(unique_points.begin(), unique_points.end());
        unique_points.erase(unique(unique_points.begin(), unique_points.end()), unique_points.end());

        // Map ranges to compressed indices
        for (int i = 0; i < n; i++) {
            impressions[i].first = lower_bound(unique_points.begin(), unique_points.end(), impressions[i].first) - unique_points.begin();
            impressions[i].second = lower_bound(unique_points.begin(), unique_points.end(), impressions[i].second) - unique_points.begin();
        }

        int m = unique_points.size();
        vector<int> active(m + 1, 0);

        // Mark ranges in active array
        for (auto [l, r] : impressions) {
            active[l]++;
            active[r + 1]--;
        }

        // Compute prefix sum for active ranges
        for (int i = 1; i < m; i++) {
            active[i] += active[i - 1];
        }

        string result(n, '0');

        // Check uniqueness for each range
        for (int i = 0; i < n; i++) {
            auto [l, r] = impressions[i];

            // Temporarily remove the current range's contribution
            for (int j = l; j <= r; j++) {
                active[j]--;
            }

            bool is_unique = true;
            for (int j = l; j <= r; j++) {
                if (active[j] > 0) {
                    is_unique = false;
                    break;
                }
            }

            // Restore the current range's contribution
            for (int j = l; j <= r; j++) {
                active[j]++;
            }

            if (is_unique) {
                result[i] = '1';
            }
        }

        cout << result << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

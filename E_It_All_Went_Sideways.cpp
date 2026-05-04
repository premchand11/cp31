#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    // Step 1: compute suffix "slots"
    vector<int> suf(n + 1, 0);

    for (int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i + 1];
        if (a[i] > suf[i]) suf[i]++;
    }

    int keep = suf[0];
    long long ans = sum - keep;

    // Step 2: try removing one cube
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) continue;

        int new_keep = 0;
        int slots = 0;

        for (int j = n - 1; j >= 0; j--) {
            int val = a[j];
            if (j == i) val--;  // simulate removal

            if (val > slots) {
                slots++;
            }
        }

        ans = max(ans, sum - 1 - slots);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();
}
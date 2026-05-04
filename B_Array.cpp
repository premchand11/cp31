#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &x : a) cin >> x;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int smaller = 0, greater = 0;

            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[i]) smaller++;
                else if (a[j] > a[i]) greater++;
            }

            ans[i] = max(smaller, greater);
        }
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
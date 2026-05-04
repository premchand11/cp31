#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, c, k;
        cin >> n >> c >> k;

        vector<int> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        multiset<int> st;
        int i = 0;

        while (true) {
            while (i < n && a[i] <= c) {
                st.insert(a[i]);
                i++;
            }
            if (st.empty()) break;
            auto it = prev(st.end());
            int x = *it;
            st.erase(it);
            int use = min(k, c - x);
            x += use;
            k -= use;
            c += x;
        }

        cout << c << "\n";
    }

    return 0;
}
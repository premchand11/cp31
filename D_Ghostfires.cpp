#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int r, g, b;
        cin >> r >> g >> b;

        // max heap: (count, char)
        priority_queue<pair<int,char>> pq;
        if (r) pq.push({r, 'R'});
        if (g) pq.push({g, 'G'});
        if (b) pq.push({b, 'B'});

        string s;

        while (!pq.empty()) {
            auto [cnt1, ch1] = pq.top(); pq.pop();

            int n = s.size();

            // check constraints for best
            if ((n >= 1 && s[n-1] == ch1) ||
                (n >= 3 && s[n-3] == ch1)) {

                if (pq.empty()) break;

                auto [cnt2, ch2] = pq.top(); pq.pop();

                // place second best
                s += ch2;
                cnt2--;

                if (cnt2 > 0) pq.push({cnt2, ch2});
                pq.push({cnt1, ch1}); // put best back

            } else {
                // place best
                s += ch1;
                cnt1--;

                if (cnt1 > 0) pq.push({cnt1, ch1});
            }
        }

        cout << s << "\n";
    }

    return 0;
}
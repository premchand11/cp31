#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll y, x;
        cin >> y >> x;

        ll n = max(y, x);
        ll ans;

        if (n % 2 == 0) {
            if (y == n)
                ans = n * n - x + 1;
            else
                ans = (n - 1) * (n - 1) + y;
        } else {
            if (x == n)
                ans = n * n - y + 1;
            else
                ans = (n - 1) * (n - 1) + x;
        }

        cout << ans << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0;

        long long left = a[0], right = a[n-1];

        if (left != -1 && right != -1) {
            ans = llabs(right - left);
        }
        else if (left != -1 && right == -1) {
            a[n-1] = left;
            ans = 0;
        }
        else if (left == -1 && right != -1) {
            a[0] = right;
            ans = 0;
        }
        else {
            a[0] = 0;
            a[n-1] = 0;
            ans = 0;
        }

        for (int i = 1; i < n - 1; i++) {
            if (a[i] == -1) a[i] = 0;
        }

        cout << ans << "\n";
        for (int i = 0; i < n; i++)
            cout << a[i] << (i + 1 < n ? ' ' : '\n');
    }

    return 0;
}

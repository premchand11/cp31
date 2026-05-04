#include <bits/stdc++.h>
using namespace std;

int group(int x) {
    if (x == 1 || x == 6) return 1;
    if (x == 2 || x == 5) return 2;
    return 3;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int changes = 0;

        int prev = -1;

        for (int i = 0; i < n; i++) {
            int g = group(a[i]);

            if (g == prev) {
                changes++;
                g = -1; 
            }

            prev = g;
        }

        cout << changes << "\n";
    }
}

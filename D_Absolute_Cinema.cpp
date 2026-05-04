#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> f(n+1);
    for (int i = 1; i <= n; i++) cin >> f[i];

    vector<ll> a(n+1);
    for (int i = 2; i <= n-1; i++) {
        a[i] = (f[i+1] + f[i-1] - 2*f[i]) / 2;
    }

    ll D = (f[2] - f[1] + f[n] - f[n-1]) / 2;

    ll sum_mid = 0;
    for (int i = 2; i <= n-1; i++) {
        sum_mid += a[i] * (i-1);
    }
    a[n] = (f[1] - sum_mid) / (n-1);
    a[1] = a[n] + D;

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " \n"[i==n];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
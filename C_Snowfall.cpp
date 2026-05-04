#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> both, only2, only3, neither;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        bool d2 = (x % 2 == 0), d3 = (x % 3 == 0);
        if (d2 && d3) both.push_back(x);
        else if (d2) only2.push_back(x);
        else if (d3) only3.push_back(x);
        else neither.push_back(x);
    }
    
    vector<int> res;
    for (int x : both) res.push_back(x);
    for (int x : only2) res.push_back(x);
    for (int x : neither) res.push_back(x);
    for (int x : only3) res.push_back(x);
    
    for (int i = 0; i < n; i++) {
        cout << res[i] << " \n"[i == n-1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
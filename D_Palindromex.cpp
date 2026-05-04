#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int m = 2*n;
    vector<int> a(m);
    vector<int> L(n), R(n);
    vector<bool> seen(n, false);
    
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        int v = a[i];
        if (!seen[v]) { L[v] = i; seen[v] = true; }
        else R[v] = i;
    }
    
    vector<int> posSum(m);
    for (int i = 0; i < m; i++) posSum[i] = L[a[i]] + R[a[i]];
    
    int ans = 0;
    for (int i = 0; i < m; i++) if (a[i] == 0) ans = 1;
    
    struct Run { int start, end, sum, mex; vector<bool> present; };
    vector<Run> runs;
    vector<int> runOf(m);
    
    for (int i = 0; i < m; ) {
        int s = posSum[i], j = i;
        while (j < m && posSum[j] == s) j++;
        
        Run r; r.start=i; r.end=j-1; r.sum=s;
        r.present.assign(n+1, false);
        for (int k=i; k<j; k++) r.present[a[k]] = true;
        r.mex = 0;
        while (r.mex <= n && r.present[r.mex]) r.mex++;
        ans = max(ans, r.mex);
        
        int idx = runs.size();
        for (int k=i; k<j; k++) runOf[k] = idx;
        runs.push_back(move(r));
        i = j;
    }
    
    for (int c = 1; c < m-1; c++) {
        int lr = runOf[c-1], rr = runOf[c+1];
        if (runs[lr].sum != 2*c || runs[rr].sum != 2*c) continue;
        if (runs[lr].start + runs[rr].end != 2*c) continue;
        
        auto& ri = runs[lr];
        int cv = a[c], mex = ri.mex;
        if (!ri.present[cv] && cv == mex) {
            mex++;
            while (mex <= n && ri.present[mex]) mex++;
        }
        ans = max(ans, mex);
    }
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}

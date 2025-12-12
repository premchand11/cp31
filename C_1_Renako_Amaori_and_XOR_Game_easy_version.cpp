#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        int xor_a = 0, xor_b = 0;
        for (int i = 0; i < n; i++) {
            xor_a ^= a[i];
            xor_b ^= b[i];
        }
        
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) continue; 
            int curr_diff = xor_a - xor_b;
            int new_xor_a = xor_a ^ a[i] ^ b[i];
            int new_xor_b = xor_b ^ b[i] ^ a[i];
            int new_diff = new_xor_a - new_xor_b;
            
            if (i % 2 == 0) { 
                if (new_diff > curr_diff) {
                    xor_a = new_xor_a;
                    xor_b = new_xor_b;
                }
            } else { 
                if (new_diff < curr_diff) {
                    xor_a = new_xor_a;
                    xor_b = new_xor_b;
                }
            }
        }
        if (xor_a > xor_b) {
            cout << "Ajisai"<<endl;
        } else if (xor_b > xor_a) {
            cout << "Mai"<<endl;
        } else {
            cout << "Tie"<<endl;
        }
    }
    
    return 0;
}
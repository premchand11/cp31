#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int xorA = 0, xorB = 0;

        for (int bit = 0; bit < 20; bit++) {
            int mask = 1 << bit;

            int bitXorA = 0, bitXorB = 0;
            for (int i = 0; i < n; i++) {
                bitXorA ^= ((a[i] & mask) ? 1 : 0);
                bitXorB ^= ((b[i] & mask) ? 1 : 0);
            }

            for (int i = 0; i < n; i++) {
                int bitA = (a[i] & mask) ? 1 : 0;
                int bitB = (b[i] & mask) ? 1 : 0;

                if (bitA == bitB) continue;

                int currentDiff = bitXorA - bitXorB;

                int newXorA = bitXorA ^ bitA ^ bitB;
                int newXorB = bitXorB ^ bitB ^ bitA;
                int newDiff = newXorA - newXorB;

                if (i % 2 == 0) {
                    if (newDiff > currentDiff) {
                        bitXorA = newXorA;
                        bitXorB = newXorB;
                    }
                }
                else {
                    if (newDiff < currentDiff) {
                        bitXorA = newXorA;
                        bitXorB = newXorB;
                    }
                }
            }

            if (bitXorA) xorA |= mask;
            if (bitXorB) xorB |= mask;
        }

        if (xorA > xorB)      cout << "Ajisai"<<endl;
        else if (xorB > xorA) cout << "Mai"<<endl;
        else                  cout << "Tie"<<endl;
    }

    return 0;
}

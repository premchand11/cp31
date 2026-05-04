#include <bits/stdc++.h>
using namespace std;

int rob(int i, int j) {
    cout << "? " << i << " " << j << endl;
    cout.flush();

    int x;
    cin >> x;
    if (x == -1) exit(0);
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool found = false;
        for (int i = 1; i <= 2*n; i += 2) {
            int res = rob(i, i+1);
            if (res == 1) {
                cout << "! " << i << endl;
                cout.flush();
                found = true;
                break;
            }
        }

        if (!found) {
            int res = rob(1, 3);

            if (res == 1) {
                cout << "! 1" << endl;
            } else {
                cout << "! 2" << endl;
            }
            cout.flush();
        }
    }

    return 0;
}
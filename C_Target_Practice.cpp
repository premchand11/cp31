#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int score = 0;

        for (int r = 0; r < 10; r++) {
            for (int c = 0; c < 10; c++) {
                char ch;
                cin >> ch;

                if (ch == 'X') {
                    int dist = min({r, c, 9 - r, 9 - c});
                    int ring = dist + 1;
                    score += ring;
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}

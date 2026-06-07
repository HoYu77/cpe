 T;
    cin >> T;
    while (T--) {
        int m, n, q;
        cin >> m >> n >> q;
        vect#include<bits/stdc++.h>
using namespace std;
int main() {
    intor<string> g(m);
        for (int i = 0; i < m; i++) {
            cin >> g[i];
        }
        cout << m << " " << n << " " << q << '\n';
        while (q--) {
            int r, c;
            cin >> r >> c;
            int len = 1;
            char ch = g[r][c];
            for (int k = 1;; k++) {
                if (r - k < 0 || r + k >= m || c - k < 0 || c + k >= n)
                    break;
                bool ok = true;
                for (int i = r - k; i <= r + k && ok; i++) {
                    for (int j = c - k; j <= c + k; j++) {
                        if (g[i][j] != ch) {
                            ok = false;
                            break;
                        }
                    }
                }
                if (!ok) break;
                len += 2;
            }
            cout << len << '\n';
        }
    }
    return 0;
}
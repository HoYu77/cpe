#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        string s;
        cin >> s;
        vector<int> cnt(10, 0);
        for (char c : s) {
            cnt[c - '0']++;
        }
        int n = s.size();
        bool ok = true;
        for (int d = 0; d <= 9; d++) {
            if (cnt[d] != n / 10) {
                ok = false;
                break;
            }
        }
        cout << "Case " << tc << ": ";
        if (ok) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
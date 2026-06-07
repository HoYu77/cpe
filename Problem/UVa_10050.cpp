#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int p;
        cin >> p;
        vector<bool> hartal(n + 1, false);
        for (int i = 0; i < p; i++) {
            int h;
            cin >> h;
            for (int day = h; day <= n; day += h) {
                if (day % 7 == 6 || day % 7 == 0) continue;
                hartal[day] = true;
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (hartal[i]) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
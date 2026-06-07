#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    cout << fixed << setprecision(4);
    while (T--) {
        int n, i;
        double p;
        cin >> n >> p >> i;
        if (p == 0.0) {
            cout << "0.0000\n";
            continue;
        }
        double ans = p * pow(1 - p, i - 1);
        ans /= (1 - pow(1 - p, n));
        cout << ans << '\n';
    }
    return 0;
}
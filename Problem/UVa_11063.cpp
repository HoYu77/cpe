#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int tc = 1;
    while (cin >> n) {
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ok = true;
        if (a[0] < 1) ok = false;
        for (int i = 1; i < n; i++) {
            if (a[i] <= a[i - 1]) {
                ok = false;
                break;
            }
        }
        set<long long> s;
        for (int i = 0; i < n && ok; i++) {
            for (int j = i; j < n; j++) {
                long long sum = a[i] + a[j];
                if (s.count(sum)) {
                    ok = false;
                    break;
                }
                s.insert(sum);
            }
        }
        cout << "Case #" << tc++ << ":";
        if (ok)
            cout << " It is a B2-Sequence.\n\n";
        else
            cout << " It is not a B2-Sequence.\n\n";
    }
    return 0;
}
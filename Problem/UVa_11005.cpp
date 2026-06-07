#include<bits/stdc++.h>
using namespace std;

int digitSum(int n, int base) {
    int sum = 0;
    do {
        sum += n % base;
        n /= base;
    } while (n);
    return sum;
}

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int cost[36];
        for (int i = 0; i < 36; i++) cin >> cost[i];

        int q;
        cin >> q;

        cout << "Case " << tc << ":\n";

        while (q--) {
            int n;
            cin >> n;

            int mn = INT_MAX;
            vector<int> ans;

            for (int base = 2; base <= 36; base++) {
                int x = n;
                int cur = 0;

                do {
                    cur += cost[x % base];
                    x /= base;
                } while (x);

                if (cur < mn) {
                    mn = cur;
                    ans.clear();
                    ans.push_back(base);
                }
                else if (cur == mn) {
                    ans.push_back(base);
                }
            }

            cout << "Cheapest base(s) for number " << n << ":";

            for (int b : ans) {
                cout << " " << b;
            }

            cout << '\n';
        }

        if (tc != T) cout << '\n';
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    int tc = 1;

    while (cin >> n) {
        cout << "Case " << tc++ << ": ";

        if (n == 0) {
            cout << "0\n";
            continue;
        }

        vector<long long> v;

        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                long long j = n / i;
                if (i != j) {
                    v.push_back(i + j);
                }
            }
        }

        if (v.empty()) {
            cout << "Impossible\n";
        } else {
            sort(v.begin(), v.end());
            cout << v[0] << '\n';
        }
    }

    return 0;
}
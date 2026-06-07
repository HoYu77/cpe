#include<bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    string line;

    while (cin >> x) {
        cin.ignore();

        if (!getline(cin, line)) break;

        stringstream ss(line);
        vector<long long> a;
        long long coef;

        while (ss >> coef) {
            a.push_back(coef);
        }

        int n = a.size() - 1;

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            ans = ans * x + a[i] * (n - i);
        }

        cout << ans << '\n';
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        string a, b;
        cin >> a >> b;
        long long x = 0, y = 0;
        for (char c : a) {
            x = x * 2 + (c - '0');
        }
        for (char c : b) {
            y = y * 2 + (c - '0');
        }
        if (__gcd(x, y) > 1)
            cout << "Pair #" << tc << ": All you need is love!\n";
        else
            cout << "Pair #" << tc << ": Love is not all you need!\n";
    }
    return 0;
}
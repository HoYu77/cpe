#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int m;
        cin >> m;
        int b1 = 0, b2 = 0;
        int n = m;
        while (n) {
            b1 += n % 2;
            n /= 2;
        }
        n = 0;
        int p = 1;
        int temp = m;
        while (temp) {
            n += (temp % 10) * p;
            p *= 16;
            temp /= 10;
        }
        while (n) {
            b2 += n % 2;
            n /= 2;
        }
        cout << b1 << " " << b2 << '\n';
    }
    return 0;
}
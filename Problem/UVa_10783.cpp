#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0) a++;
        long long sum = 0;
        for (int i = a; i <= b; i += 2) {
            sum += i;
        }
        cout << "Case " << tc << ": " << sum << '\n';
    }
    return 0;
}
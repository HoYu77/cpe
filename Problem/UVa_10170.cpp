#include<bits/stdc++.h>
using namespace std;

int main() {
    long long s, d;

    while (cin >> s >> d) {
        long long sum = 0;
        long long n = s;

        while (sum < d) {
            sum += n;
            n++;
        }

        cout << n - 1 << '\n';
    }

    return 0;
}
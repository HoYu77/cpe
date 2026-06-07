#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while (cin >> s && s != "0") {
        string original = s;
        int degree = 0;
        while (true) {
            int sum = 0;
            for (char c : s) {
                sum += c - '0';
            }
            degree++;
            if (sum == 9) {
                cout << original << " is a multiple of 9 and has 9-degree "
                     << degree << ".\n";
                break;
            }
            if (sum < 9 || sum % 9 != 0) {
                cout << original << " is not a multiple of 9.\n";
                break;
            }
            s = to_string(sum);
        }
    }
    return 0;
}
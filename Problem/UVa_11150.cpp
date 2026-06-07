#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while (getline(cin, s)) {
        if (s == ".") break;
        string doubled = s + s;
        int n = s.size();
        for (int len = 1; len <= n; len++) {
            if (n % len != 0) continue;
            string pattern = s.substr(0, len);
            string built = "";
            while (built.size() < n) built += pattern;
            if (built == s) {
                cout << n / len << '\n';
                break;
            }
        }
    }
    return 0;
}
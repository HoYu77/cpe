#include<bits/stdc++.h>
using namespace std;

int value(char c) {
    if ('0' <= c && c <= '9') return c - '0';
    if ('A' <= c && c <= 'Z') return c - 'A' + 10;
    if ('a' <= c && c <= 'z') return c - 'a' + 36;
    return 0;
}

int main() {
    string s;

    while (getline(cin, s)) {
        int sum = 0;
        int mx = 1;

        for (char c : s) {
            if (isalnum(c)) {
                int v = value(c);
                sum += v;
                mx = max(mx, v);
            }
        }

        bool found = false;

        for (int base = mx + 1; base <= 62; base++) {
            if (sum % (base - 1) == 0) {
                cout << base << '\n';
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "such number is impossible!\n";
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    cin.ignore();
    cin.ignore();
    while (T--) {
        map<string, int> mp;
        string s;
        int total = 0;
        while (getline(cin, s) && !s.empty()) {
            mp[s]++;
            total++;
        }
        for (auto &p : mp) {
            cout << p.first << " "
                 << fixed << setprecision(4)
                 << p.second * 100.0 / total << '\n';
        }
        if (T) cout << '\n';
    }

    return 0;
}
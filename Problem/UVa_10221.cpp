#include<bits/stdc++.h>
using namespace std;
int main() {
    const double PI = acos(-1.0);
    double s, a;
    string unit;
    while (cin >> s >> a >> unit) {
        double r = s + 6440.0;
        if (unit == "min")
            a /= 60.0;
        if (a > 180.0)
            a = 360.0 - a;
        double theta = a * PI / 180.0;
        double arc = r * theta;
        double chord = 2.0 * r * sin(theta / 2.0);
        cout << fixed << setprecision(6)
             << arc << " " << chord << '\n';
    }
    return 0;
}
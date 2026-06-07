#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    bool scent[55][55] = {};

    int x, y;
    char d;

    while (cin >> x >> y >> d) {
        string s;
        cin >> s;

        int dir;

        if (d == 'N') dir = 0;
        else if (d == 'E') dir = 1;
        else if (d == 'S') dir = 2;
        else dir = 3;

        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};

        bool lost = false;

        for (char c : s) {
            if (c == 'L') {
                dir = (dir + 3) % 4;
            }
            else if (c == 'R') {
                dir = (dir + 1) % 4;
            }
            else {
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                if (nx < 0 || nx > X || ny < 0 || ny > Y) {
                    if (scent[x][y]) continue;

                    scent[x][y] = true;
                    lost = true;
                    break;
                }

                x = nx;
                y = ny;
            }
        }

        char ans;

        if (dir == 0) ans = 'N';
        else if (dir == 1) ans = 'E';
        else if (dir == 2) ans = 'S';
        else ans = 'W';

        cout << x << ' ' << y << ' ' << ans;

        if (lost) cout << " LOST";

        cout << '\n';
    }

    return 0;
}
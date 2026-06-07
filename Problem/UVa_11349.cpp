#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int tc=1; tc<=t; tc++){
        char c;
        int n;
        cin >> c >> c >> n;

        vector<vector<long long>> a(n, vector<long long>(n));
        bool ok = true;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
                if(a[i][j] < 0) ok = false;
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] != a[n-1-i][n-1-j]){
                    ok = false;
                }
            }
        }

        cout << "Test #" << tc << ": ";
        cout << (ok ? "Symmetric." : "Non-symmetric.") << "\n";
    }
}
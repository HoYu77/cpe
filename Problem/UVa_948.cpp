#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> fib;
    fib.push_back(1);
    fib.push_back(2);
    while(fib.back()<100000000){
        fib.push_back(fib[fib.size()-1]+fib[fib.size()-2]);
    }
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long original =n;
        int pos=0;
         for (int i = fib.size()-1; i >= 0; i--) {
            if (fib[i] <= n) {
                pos = i;
                break;
            }
        }
        string ans="";
        for (int i = pos; i >= 0; i--) {

            if (fib[i] <= n) {
                ans += '1';
                n -= fib[i];
            }
            else {
                ans += '0';
            }
        }
        cout<<original<<" = "<<ans<<" (fib)"<<endl;
    }
}
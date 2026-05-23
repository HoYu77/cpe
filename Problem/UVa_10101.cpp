#include<bits/stdc++.h>
using namespace std;
void solve(long long n){
    if(n>=10000000){
        solve(n/10000000);
        cout<<" kuti";
        n%=10000000;
    }
    if(n>=100000){
        cout<<" "<<n/100000<<" lakh";
        n%=100000;
    }
     if(n>=1000){
        cout<<" "<<n/1000<<" hajar";
        n%=1000;
    }
    if(n>=100){
        cout<<" "<<n/100<<" shata";
        n%=100;
    }
    if(n){
        cout<<" "<<n;
    }
}
int main(){
    long long n;
    int time=1;
    while(cin>>n){
        cout<<setw(4)<<time++<<".";
        if(n==0){
            cout<<" 0\n";
            continue;
        }
        else{
        solve(n);
        cout<<endl;
        }
    }
}
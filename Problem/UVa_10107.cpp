#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> v;
    long long x;
    while(cin>>x){
        v.push_back(x);
        sort(v.begin(),v.end());
        int n=v.size();
        if(n%2==1){
            cout<<v[n/2]<<endl;
        }
        else{
            cout<<(v[n/2]+v[n/2-1])/2<<endl;
        }
    }
}
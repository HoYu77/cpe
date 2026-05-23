#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin>>t){
        vector<int> num(t);
        for(int i=0;i<t;i++){
           cin>>num[i];
        }
        sort(num.begin(),num.end());
        
        long long x=num[(t-1)/2];
        long long y=num[t/2];
        int cnt=0;
        for(int v:num){
            if(v>=x && v<=y){
                cnt++;
            }
        }
        cout<<x<<" "<<cnt<<" "<<y-x+1<<endl;
    }
}
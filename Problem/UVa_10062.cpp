#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool first=true;
    while(getline(cin,s)){
        if(!first) cout<<endl;
        first=false;
        sort(s.begin(),s.end());
        vector<pair<int,int>> v;
        int cnt=1;

        for(int i=0;i<s.length();i++){
            if(s[i+1]==s[i]){
                cnt++;
            }
            else{
                v.push_back({cnt,int(s[i])});
                cnt=1; 
            }
        }
        sort(v.begin(),v.end(),[](pair<int,int>a,pair<int,int>b){
             if(a.first!=b.first){
                return a.first<b.first;
             }
             return a.second>b.second;
        });
        for(auto x:v){
            cout<<x.second<<" "<<x.first<<endl;
        }
        }
}
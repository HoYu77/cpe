#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string,int>mp;
    while(t--){
        string s;
        cin>>s;
        mp[s]++;
        getline(cin,s);
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
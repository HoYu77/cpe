#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s&&s!="0"){
    int t=0;
    int x=0;
    for(int i=0;i<s.length();i+=2){
       t+=s[i]-'0';
    }
    for(int j=1;j<s.length();j+=2){
        x+=s[j]-'0';
    }
    if((t-x)%11==0){
        cout<<s<<" is a multiple of 11."<<endl;
    }
    else {
        cout<<s<<" is not a multiple of 11."<<endl;
    }
 }
}
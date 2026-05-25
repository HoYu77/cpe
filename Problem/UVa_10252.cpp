#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2,s;
    while(getline(cin,s1),getline(cin,s2)){
        if(s1==" "||s2==" "){
            cout<<" "<<endl;
            continue;
        }
        for(int i=0;i<s1.length();i++){
            for(int j=0;j<s2.length();j++){
                if(s1[i]==s2[j]){
                    s+=s1[i];
                    s1.erase(i,1);
                    s2.erase(j,1);
                }
            }
        }
        sort(s.begin(),s.end());
       cout<<s<<endl;
       s.clear(),s1.clear(),s2.clear();
    }
}
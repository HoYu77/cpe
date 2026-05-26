#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,string>note;
    note['c']="0111001111";
    note['d']="0111001110";
    note['e']="0111001100";
    note['f']="0111001000";
    note['g']="0111000000";
    note['a']="0110000000";
    note['b']="0100000000";
    note['C']="0010000000";
    note['D']="1111001110";
    note['E']="1111001100";
    note['F']="1111001000";
    note['G']="1111000000";
    note['A']="1110000000";
    note['B']="1100000000";
    
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
       string s;
       getline(cin,s);
       int ans[10]={0};
       string now="0000000000";
       for(int i=0;i<s.size();i++){
        string next=note[s[i]];
        for(int j=0;j<10;j++){
            if(now[j]=='0'&&next[j]=='1'){
                ans[j]++;
            }
        }
        now=next;
       }
       for(int i=0;i<10;i++){
        if(i){
            cout<<" ";
        }
        cout<<ans[i];
       }
        cout<<endl;
    }
}
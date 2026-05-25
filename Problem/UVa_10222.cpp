#include<iostream>
#include<string>
using namespace std;
int main(){
    string key="qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    while(getline(cin,s)){
          for(int i=0;i<s.length();i++){
             if(s[i]>='A'&&s[i]<='Z'){
                s[i]=tolower(s[i]); 
             }
              if(s[i]==' '||s[i]=='\n'){
                cout<<s[i];}
             else { 
            
                cout<<key[key.find(s[i])-2];}
          }
          cout<<endl;
    }
}
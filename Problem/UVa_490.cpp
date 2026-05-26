#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> v;
    string s;
    int maxlength=0;
    while(getline(cin,s)){
        v.push_back(s);
        if(s.size()>maxlength){
            maxlength=s.size();
        }
    }
    for(int i=0;i<maxlength;i++){
          for(int j=v.size()-1;j>=0;j--){
            if(i<v[j].size()){
                cout<<v[j][i];
            }
            else cout<<" ";
          }
          cout<<endl;
    }
}
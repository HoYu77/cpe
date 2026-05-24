#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    while(cin>>a>>b){
        vector<long long>v;
        bool ok=true;
        if(a<=1||b<=1){
            cout<<"Boring!"<<endl;
            continue;
        }
       v.push_back(a);
       while(a>1){
         if(a%b!=0){
            ok=false;
            break;
         }
         a/=b;
         v.push_back(a);

       }
       if(!ok){
        cout<<"Boring!"<<endl;
       }
       else{

        for(int i=0;i<v.size();i++){
            if(i) {
                cout<<" ";
            }
            cout<<v[i];
        }
        cout<<endl;
       }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<int> num;
    while(q--){
        int x,y;
        cin>>y>>x;
        if(y==1){
            num.push_back(x);
        }
        else if(y==2){
           int i=num.at(x);
           num.erase(num.begin()+i);
        }
        else if(y==3){
            bool found=false;
            for(int j=0;j<num.size();j++){
                if(x==num[j]){
                    found=true;
                    break;
                }
            }
            if(found) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}
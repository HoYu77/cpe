#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int x,y;
        vector<int> num;
        cin>>y>>x;
        if(y==1){
            num.push_back(x);
        }
        else if(y==2){
           int i=num.at(x);
           num.erase(num.begin()+i);
        }
        else if(y==3){
            for(int j=0;j<sizeof(num);j++){
                if(x==num[j]){
                    cout<<"Yes"<<endl;
                }
                else {
                    cout<<"No"<<endl;
                }
            }
        }
    }
}
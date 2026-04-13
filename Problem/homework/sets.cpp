#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    set<int> num;
    while(q--){
        int x,y;
        cin>>y>>x;
        if(y==1){
            num.insert(x);
        }
        else if(y==2){
            num.erase(x);
        }
         else if(y == 3){
            if(num.find(x) != num.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
}
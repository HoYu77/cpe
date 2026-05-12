#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0){
            break;
        }
        else {
            int cnt=0;
            while(a>0||b>0){
                if(a%10+b%10>9){
                    cnt+=1;
                    a/=10;
                    b/=10;
                }
                else{
                    a/=10;
                    b/=10;
                }
            }
            if(cnt==0){
                cout<<"No carry operation."<<endl;
            }
            else if(cnt==1){
                cout<<"1 carry operation."<<endl;
            }
            else {
                cout<<cnt<<" carry operations."<<endl;
            }
        }
    }
}
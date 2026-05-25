#include<iostream>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0){
            break;
        }
        int carry=0;
        int cnt=0;
        while(a||b){
            if(a%10+b%10+carry>=10){
                cnt++;
                carry=1;
            }
            else carry=0;
            a/=10;
            b/=10;
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
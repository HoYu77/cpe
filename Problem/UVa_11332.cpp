#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        while(n>=10){
        int ans=0;
        while(n!=0){
         ans+=n%10;
          n/=10;
         }
         n=ans;
    }
    cout<<n<<endl;
    }
}
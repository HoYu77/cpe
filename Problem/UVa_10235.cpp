#include<iostream>
#include<algorithm>
using namespace std;
bool prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int rev(int n){
    int r=0;
    while(n>0){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
int main(){
    int t;
    while(cin>>t){
        int r=rev(t);
        if(prime(t)){
            if(prime(r)&&r!=t){
                cout<<t<<" is emirp."<<endl;
            }
            else cout<<t<<" is prime."<<endl;
        }
        else cout<<t<<" is not prime."<<endl;
    }
}
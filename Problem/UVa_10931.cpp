#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n&&n){
        string s="";
        int cnt=0;
        while(n>0){
            if(n%2==1){
              cnt++;
            }
            s+=(n%2)+'0';
            n/=2;
        }
        reverse(s.begin(),s.end());
        
        cout<<"The parity of "<<s<<" is "<<cnt<<" (mod 2)."<<endl;
    }
}
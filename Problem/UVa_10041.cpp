#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    int t;
    cin>>t;

    vector<int> num(t);

    for(int i=0;i<t;i++){
       cin>>num[i];
    }
    sort(num.begin(),num.end());
    int mid=num[t/2];
    int a=0;
    for(int i=0;i<t;i++){
        a=a+abs(num[i]-mid);
    }
    cout<<a<<endl;
   }
}
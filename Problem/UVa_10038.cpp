#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int check[3000]={0};
        int flag=1;
        int table[3000]={0};
        for(int i=1;i<=n;i++){
            cin>>table[i];
        }
        for(int i=1;i<n;i++){
            check[abs(table[i+1]-table[i])]=1;
        }
        for(int i=1;i<n;i++){
            if(check[i]!=1){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"Jolly"<<endl;
        }
        else cout<<"Not jolly"<<endl;
    }
    
}
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        cout<<a<<"\t"<<b<<"\t";
        if(a>b){swap(a,b); }
        int max=0;
        for(int i=a;i<=b;i++){
            int count=1;
        int j=i;
        while(j!=1){
            if(j%2==0){
                j=j/2;
                count++;
            }
            else{
                j=3*j+1;
                count++;
            }
        }
        if(count>max){max=count;}
        }
        cout<<max<<endl;
    }
}
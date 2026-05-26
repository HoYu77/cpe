#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0){
            break;
        }
        int x=ceil(sqrt(a));
        int y=floor(sqrt(b));
        cout<<y-x+1<<endl;
    }
}
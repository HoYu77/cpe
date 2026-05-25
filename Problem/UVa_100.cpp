#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        int x=a;
        int y=b;
        if(a>b){
            swap(a,b);
        }
        int max=0;
        for(int i=a;i<=b;i++){
            int x=i;
            int cnt=1;
            while(x!=1){
                if(x%2!=0){
                    x=3*x+1;
                    cnt++;
                }
                else {
                    x/=2;
                    cnt++;
                }
            }
            if(max<cnt){
                max=cnt;
            }
           
        }
        cout<<x<<" "<<y<<" "<<max<<endl;
    }
}
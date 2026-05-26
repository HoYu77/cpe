#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    string die;
    while(cin>>n){
        int top=1,bottom=6;
        int north=2,south=5;
        int west=3,east=4;
        if(n==0){
            break;
        }
        for(int i=0;i<n;i++){
            cin>>die;
            if(die=="north"){
                swap(bottom,north);
                swap(north,top);
                swap(top,south);
            }
            if(die=="south"){
                swap(bottom,south);
                swap(south,top);
                swap(top,north);
            }
            if(die=="west") { 
                swap(bottom,west);
                swap(west,top);
                swap(top,east);
        }
            if(die=="east") { //向東轉，南北面不會動到
                swap(bottom,east);
                swap(east,top);
                swap(top,west);
            }
    }
cout<<top<<endl;
    }
}
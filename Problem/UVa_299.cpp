#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
               if(v[j]>v[i]){
                cnt++;
               }
            }
        }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
    }
}
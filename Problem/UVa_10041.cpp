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
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        
        sort(num.begin(),num.end());
        
        int mid=num[n/2];
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=abs(mid-num[i]);
        }
        cout<<ans<<endl;
    }
}
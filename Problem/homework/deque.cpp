#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        deque<int> deq;
        for(int i=0;i<n;i++){
            if(!deq.empty() && deq.front() <= i - k){
                deq.pop_front();
            }
            while(!deq.empty() && num[deq.back()] <= num[i]){

            
                deq.pop_back();
                }
                deq.push_back(i);
            if(i >= k - 1)
            cout << num[deq.front()] << " ";
        }
        cout<<endl;
    } 
}
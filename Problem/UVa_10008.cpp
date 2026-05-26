#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct node{
    char c;
    int cnt;
};
bool cmp(node a,node b){
      if(a.cnt!=b.cnt){
        return a.cnt>b.cnt;
      }
      return a.c<b.c;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    int freq[26]={0};
    while(n--){
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                char ch=toupper(s[i]);
                freq[ch-'A']++;
            }
        } 
    }
    node arr[26];
    for(int i=0;i<26;i++){
        arr[i].c='A'+i;
        arr[i].cnt=freq[i];
    }
    sort(arr,arr+26,cmp);
    for(int i=0;i<26;i++){
        if(arr[i].cnt>0){
            cout<<arr[i].c<<" "<<arr[i].cnt<<endl;
        }
    }
}
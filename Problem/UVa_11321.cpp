#include<bits/stdc++.h>
using namespace std;

int m;

bool cmp(int a,int b){

    int moda=a%m;
    int modb=b%m;

 
    if(moda!=modb){
        return moda<modb;
    }

    bool odda=a%2!=0;
    bool oddb=b%2!=0;


    if(odda!=oddb){
        return odda;
    }


    if(odda&&oddb){
        return a>b;
    }


    return a<b;
}

int main(){

    int n;

    while(cin>>n>>m){

        cout<<n<<" "<<m<<endl;

        if(n==0&&m==0){
            break;
        }

        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end(),cmp);

        for(int x:v){
            cout<<x<<endl;
        }
    }
}
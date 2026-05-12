#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.length()>=8){
        string i=s;
        cout<<i.erase(i.size()-8,8)<<" kuti ";
        while(s.length()>=8){
            s.erase(0,1);
        }
    }
    else if(s.length()>=6){
        string j=s;
        cout<<j.erase(j.size()-6,6)<<" lakh ";
        while(s.length()>=6){
            s.erase(0,1);
        }
    }
    else if(s.length()>=4){
        string f=s;
        cout<<f.erase(f.size()-4,4)<<" hajar ";
        while(s.length()>=4){
            s.erase(0,1);
        }
    }
    else if(s.length()>=3){
        string h=s;
        cout<<h.erase(h.size()-3,3)<<" shata ";
        while(s.length()>=3){
            s.erase(0,1);
        }
    }
    cout<<s<<endl;
}
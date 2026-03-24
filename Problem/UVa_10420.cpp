#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> countries;
    while(t--){
        string country;
        cin>>country;
        string name;
        getline(cin,name);
        countries.push_back(country);
    }
    sort(countries.begin(),countries.end());
    

}
#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    bool find=false;

    while(getline(cin,s)){

        for(int i=0;i<s.size();i++){

            if(s[i]=='\"' && find==false){

                cout<<"``";
                find=true;
            }

            else if(s[i]=='\"' && find==true){

                cout<<"''";
                find=false;
            }

            else{
                cout<<s[i];
            }
        }

        cout<<endl;
    }
}

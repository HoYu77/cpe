#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int empty = n;
        int drink = n;

        while(empty >= 3){
            int new_drink = empty / 3;
            drink += new_drink;
            empty = empty % 3 + new_drink;
        }

        if(empty == 2) drink += 1;

        cout << drink << "\n";
    }
}
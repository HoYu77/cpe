#include<bits/stdc++.h>
using namespace std;

vector<int> g[100];
bool vis[105];

void dfs(int u){
    for(int v:g[u]){
        if(!vis[v]){
            vis[v]= true;
            dfs(v);
        }
    }
}

int main(){
    int n;
    while(cin>>n&&n!=0){
        for(int i=1;i<=n;i++){
            g[i].clear();
        }
         
        while(true){
        int u;
        cin>>u;
        if(u==0){
            break;
        }
        while(true){
        int v;
        cin>>v;
        if(v==0){
            break;
        }
        g[u].push_back(v);
        }
    }
    int q;
    cin>>q;
    while(q--){
        int start;
        cin>>start;
        memset(vis,false,sizeof(vis));
        dfs(start);
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                ans.push_back(i);
            }
        }
        cout<<ans.size();
        for(int i = 0; i < int(ans.size()); i++){
                cout << " " << ans[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> adj;

void bfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            bfs(v);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,m;
    cin >> n >> m;
    visited.resize(n+1,false);
    adj.resize(n+1);
    vector<bool> hasFriend(n+1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        hasFriend[u] = true;
        hasFriend[v] = true;
    }

    int kendaraan = 0;
    int sendirian = 0;
    for (int i = 1; i <= n; i++)
    {
        if(!visited[i] && hasFriend[i]){
            bfs(i);
            kendaraan++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if(!hasFriend[i]){
            sendirian++;
        }
    }

    if(sendirian > 1){
        kendaraan += 1;
    }else{
        kendaraan += 0;
    }

    cout << kendaraan << endl;
    
    
    
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> sarang;
vector<int> monster;
vector<bool> visited;

int dfs(int u){
    int total = monster[u];
    visited[u] = true;
    for(int v : sarang[u]){
        if(!visited[v]){
            total += dfs(v);
        }
    }
    return total;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;

    sarang.resize(n+1);
    monster.resize(n+1);
    visited.assign(n+1, false);

    for (int i = 0; i < n; i++)
    {
        cin >> monster[i];
    }
    

    for (int i = 0; i < k; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;v--;
        sarang[u].push_back(v);
        sarang[v].push_back(u);
    }

    vector<ll> totalMonster;
    for (int i = 0; i < n; i++)
    {
        if(!visited[i]){
            int total = dfs(i);
            totalMonster.push_back(total);
        }
    }

    sort(totalMonster.rbegin(), totalMonster.rend());
    ll totalTenaga = 0;
    for (int i = 0; i < totalMonster.size(); i++)
    {
        totalTenaga += 1LL * (i+1) * totalMonster[i];
    }

    cout << totalTenaga << endl;
    
}
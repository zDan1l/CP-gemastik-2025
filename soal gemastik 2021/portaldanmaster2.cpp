#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> sarang;
vector<bool> visited;
vector<int> monster;

int dfs(int u){
    visited[u] = true;
    int total = monster[u];
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

    visited.assign(n, false);
    sarang.resize(n);
    monster.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> monster[i];
    }

    for (int i = 0; i < k; i++)
    {
        int u, v;
        cin >> u >> v;
        u--; v--;
        sarang[u].push_back(v);
        sarang[v].push_back(u);
    }

    vector<int> totalMonster;

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
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

    monster.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> monster[i];
    }

    sarang.resize(n);
    visited.assign(n, false);

    for (int i = 0; i < k; i++)
    {
        int u, v;
        cin >> u >> v;
        u--; v--;
        sarang[u].push_back(v);
        sarang[v].push_back(u);
    }
    
    vector<ll> komponenMonster;
    for (int i = 0; i < n; ++i)
    {
        if(!visited[i]){
            int total = dfs(i);
            komponenMonster.push_back(total);
        }
    }

    sort(komponenMonster.rbegin(), komponenMonster.rend());

    ll total = 0;
    for (int i = 0; i < komponenMonster.size(); i++)
    {
        // cout << "komponen monster " <<  komponenMonster[i] << endl;
        total += 1LL * (i+1) * komponenMonster[i];
        // cout << total << endl;

    }

    cout << total << endl;
    
    
}
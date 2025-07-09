#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> langkah(n);
    for (int i = 0; i < n; i++)
    {
        cin >> langkah[i];
    }

    int i = 0;
    for (int i = 0; i < n; i++)
    {
        int m = langkah[i];
        int x = 0, y = 0, move = 0, step = 1, dir = 0, done = 0;
        while(done < m){
            move = min(step, m - done);

            switch (dir % 4)
            {
            case 0: x += move; break;
            case 1: y += move; break;
            case 2: x -= move; break;
            case 3: y -= move; break;
            }
            dir++;
            step++;
            done += move;
        }
        cout << x << " "  << y << endl;   
    }
}
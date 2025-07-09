#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll n;
    cin >> n;
    vector<ll> langkah(n);

    for (int i = 0; i < n; i++)
    {
        cin >> langkah[i];
    }

    for (int i = 0; i < n; i++)
    {
        int M = langkah[i];
        int dir = 0, move = 0, step = 1, done = 0, x = 0, y = 0;

        while(done < M){
            move = min(step, M - done);

            switch (dir % 4)
            {
            case 0:x += move; break;
            case 1:y += move; break;
            case 2:x -= move; break;
            case 3:y -= move; break;
            }
            dir++;
            done += move;
            step++;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
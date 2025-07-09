#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> langkah(n);

    for (int i = 0; i < n; i++)
    {
        cin >> langkah[i];
    }

    for (int i = 0; i < n; i++)
    {
        int x = 0, y = 0;
        int M = langkah[i];
        int dir = 0;
        int stepCount = 1;
        int move = 0;
        int done = 0;

        while(done < M){

            move = min(stepCount, M - done);

            switch (dir%4)
            {
                case 0: x += move; break;
                case 1: y += move; break;
                case 2: x -= move; break;
                case 3: y -= move; break;
            }

            done += move;
            dir++;
            stepCount++;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
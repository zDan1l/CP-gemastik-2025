#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll n;
    cin >> n;
    vector<ll> tiang(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tiang[i];
    }

    sort(tiang.begin(), tiang.end());
    ll astik = tiang.back() - tiang.front();
    
    ll gema = 0;
    for (int i = 1; i < n; i++)
    {
        gema = max(gema, tiang[i]-tiang[i-1]);
    }
    
    cout << gema << endl;
    cout << astik << endl;
    
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> number(n);
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    
    sort(number.begin(), number.end());
    ll astik = number.back() - number.front();
    ll gema = 0;
    for (int i = 1; i < n; i++)
    {
        gema = max(gema, abs(number[i]-number[i-1]));
    }

    cout << gema << endl;
    cout << astik << endl;
    
    
    
}
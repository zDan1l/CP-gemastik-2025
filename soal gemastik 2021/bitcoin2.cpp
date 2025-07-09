#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> harga(n);
    for (int i = 0; i < n; i++)
    {
        cin >> harga[i];
    }

    ll keuntungan = 0;
    bool beli = false;
    for (int i = 0; i < n-1; i++)
    {
        if(harga[i] < harga[i+1]){
            beli = true;
            keuntungan += (harga[i+1] - harga[i]);
        }
    }

    if(beli){
        cout << keuntungan << endl;
    }else{
        cout << "0" << endl;
    }
    
    
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
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
    
    // int i = 0;
    // bool beli;
    // while(i < (n-1))
    // {
    //     ll j = i+1;
    //     beli = false;
    //     while(harga[i] < harga[j] && j < n && harga[j] > harga[j-1]){
    //         // cout << "harga beli :" << harga[i] << endl;
    //         // cout << "harga jual :" << harga[j] << endl;
    //         beli = true;
    //         j++;
    //     }
    //     // cout << harga[i] << " " << harga[j-1] << endl;
    //     if(beli){
    //         keuntungan += (harga[j-1] - harga[i]);
    //         i = j-1;
    //         // cout << harga[i] << endl;
    //     }
    //     i++;
    // }
    

    if(beli){
        cout << keuntungan << endl;
    }else{
        cout << "0" << endl;
    }
}
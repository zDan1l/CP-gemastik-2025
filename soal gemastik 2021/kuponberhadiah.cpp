#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x;
    cin >> n >> x;
    vector<ll> kupon(n);
    vector<ll> hasil;

    for (ll i = 0; i < n; i++)
    {
        cin >> kupon[i];
    }

    
    ll minSelisih = 99999;
    for (int i = 0; i < n; i++) {
        int selisih = abs(kupon[i] - x);
        if (selisih < minSelisih) {
            hasil.clear();
            hasil.push_back(kupon[i]);
            minSelisih = selisih;
        } else if (selisih == minSelisih) {
            hasil.push_back(kupon[i]);
        }
    }
    
    sort(hasil.begin(), hasil.end());
    for(ll n : hasil){
        cout << setw(5) << setfill('0') << n << endl;
    }
    
}


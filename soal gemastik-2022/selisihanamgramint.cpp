#include <bits/stdc++.h>
using namespace std;
using ll = long long;
set<ll> hasil;

void membuatAnagram(string s){
    sort(s.begin(), s.end());

    do {
        hasil.insert(stoll(s));
    } while (next_permutation(s.begin(), s.end()));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll angka = stoll(s);
    membuatAnagram(s);
    ll minSelisih = LLONG_MAX;
    for(ll x : hasil){
        cout << x << endl;
        if(x == angka) continue;
        minSelisih = min(minSelisih, abs(angka - x));
    }

    cout << minSelisih << endl;
}
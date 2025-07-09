#include <bits/stdc++.h>
using namespace std;

string selisih(string a, string b){
    if(a < b) swap(a,b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while(b.length() < a.length()) b+= '0';
    
    int carry = 0;
    string hasil = "";
    for (int i = 0; i < a.length(); i++)
    {
        int digita = a[i] - '0';
        int digitb = b[i] - '0' + carry;

        if(digita < digitb){
            digita += 10;
            carry = 1;
        }else{
            carry = 0;
        }

        hasil += (digita - digitb) + '0';
    }
    
    while(hasil.length() > 1 && hasil.back() == '0') hasil.pop_back();
    reverse(hasil.begin(), hasil.end());
    return hasil;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    string s;
    cin >> s;
    string next = s, prev = s;
    bool hasprev = prev_permutation(prev.begin(), prev.end());
    bool hasnext = next_permutation(next.begin(), next.end());

    string selisih1 = "", selisih2 = "";
    if(hasprev) selisih1 = selisih(s,prev);
    if(hasnext) selisih2 = selisih(s, next);

    string minSelisih = "";
    if(!selisih1.empty() && !selisih2.empty()){
        if(selisih1.length() < selisih2.length() || (selisih1.length() == selisih2.length() && selisih1 < selisih2)){
            minSelisih = selisih1;
        }
    }else if(selisih1.empty()){
        minSelisih = selisih2;
    }else{
        minSelisih = selisih1;
    }

    cout << minSelisih << endl;

}
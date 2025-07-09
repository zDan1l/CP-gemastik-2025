#include <bits/stdc++.h>
using namespace std;

string selisih(string a, string b){
    if(a < b) swap(a,b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while (b.size() < a.size()) b += '0';

    string hasil = "";
    int carry = 0;
    for (int i = 0; i < a.size(); i++)
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


    while(hasil.size() > 1 && hasil.back() == '0') hasil.pop_back();
    reverse(hasil.begin(), hasil.end());
    return hasil;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    string prev = s, next = s;
    bool hasprev = prev_permutation(prev.begin(), prev.end());
    bool hasnext = next_permutation(next.begin(), next.end());

    string selisih1 = "", selisih2 = "";
    if(hasprev){
        selisih1 = selisih(s,prev);
    }
    if(hasnext){
        selisih2 = selisih(s,next);
    }

    string minSelisih = "";
    if(!selisih2.empty() && !selisih1.empty()){
        if(selisih2.length() < selisih1.length() || (selisih2.length() == selisih1.length() && selisih2 < selisih1)){
            minSelisih = selisih2;
        }else{
            minSelisih = selisih1;
        }
    }else if(selisih2.empty()){
        minSelisih = selisih1;
    }else{
        minSelisih = selisih2;
    }

    cout << minSelisih << endl;
}
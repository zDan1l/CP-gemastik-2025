#include <bits/stdc++.h>
using namespace std;

bool semuaSama(vector<int> number){
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> number;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        number.insert(a);
    }

    vector<int> newNumber(number.begin(), number.end());
    int panjang = newNumber.size();

    vector<string> hasil;
    int i = 0;
    while(i < panjang){
        int start = i;

        while(newNumber[i]+1 == newNumber[i+1] && i+1 < panjang){
            i++;
        }

        if(start == i){
            hasil.push_back(to_string(newNumber[i]));
        }else{
            hasil.push_back(to_string(newNumber[start]) + "-" + to_string(newNumber[i]));
        }
        i++;
    }

    for (int i = 0; i < hasil.size(); i++)
    {
        if(i > 0) cout << ",";
        cout << hasil[i];
    }
    
}
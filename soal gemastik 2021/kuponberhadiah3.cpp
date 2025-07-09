#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin >> n >> x;
    vector<int> kupon(n);

    for (int i = 0; i < n; i++)
    {
        cin >> kupon[i];
    }

    int minSelisih = 99999;
    vector<int> hasil;
    for (int i = 0; i < n; i++)
    {
        int selisih = abs(kupon[i] - x);
        if(selisih < minSelisih){
            hasil.clear();
            hasil.push_back(kupon[i]);
            minSelisih = selisih;
        }else if(selisih == minSelisih){
            hasil.push_back(kupon[i]);
        }
    }

    sort(hasil.begin(), hasil.end());

    for(int n : hasil){
        cout << setw(5) << setfill('0') << n << endl;
    }
}




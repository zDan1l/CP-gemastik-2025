#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string kata1, kata2;
    
    int n;
    cin >> n;
    cin >> kata1 >> kata2;

    int operasi = 0;
    bool swap = true;
    for (int i = 0; i < n; i++)
    {
        if(kata1[i] > kata2[i]){
            if(swap){
                operasi++;
            }
            swap = false;            
        }else if(kata1[i] < kata2[i]){
            swap = true;
        }
    }
    
    cout << operasi << endl;
}
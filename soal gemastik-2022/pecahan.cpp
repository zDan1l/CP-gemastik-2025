#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    if((a*d) > (b*c)){
        cout << "lebih besar" << endl;
    }else if((a*d) < (b*c)){
        cout << "lebih kecil" << endl;
    }else{
        cout << "sama" << endl;
    }
}
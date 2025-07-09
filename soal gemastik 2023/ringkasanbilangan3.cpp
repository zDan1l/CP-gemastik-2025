#include <bits/stdc++.h>
using namespace std;

int main(){
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
    vector<string> result;
    int panjang = newNumber.size();
    int i = 0;
    while(i < panjang)    {
        int start = i;
        while (i < panjang && newNumber[i]+1 == newNumber[i+1])
        {
            i++;
        }

        if(start == i){
            result.push_back(to_string(newNumber[i]));
        }else{
            result.push_back(to_string(newNumber[start]) + "-" + to_string(newNumber[i]));
        }
        i++;
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        if(i > 0) cout << ",";
        cout << result[i];
    }
    
}
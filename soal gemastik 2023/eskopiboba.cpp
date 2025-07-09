#include <bits/stdc++.h>
using namespace std;

bool semuaSama(vector<int> volumes){
    for (int i = 0; i < volumes.size(); i++)
    {
        if(volumes[i] != volumes[0]) return false;
    }
    return true;
    
}

bool cobaTuang(vector<int> volumes, int& X, int& Y, int& Z){
    int n = volumes.size();
    long long totalVolume = 0;
    for(int v : volumes) totalVolume += v;

    if(totalVolume % n != 0) return false;
    int target = totalVolume / n;

    for (int y = 0; y < n; y++)
    {
        for (int z = 0; z < n; z++)
        {
            if(y == z) continue;

            if((volumes[y] - volumes[z]) % 2 != 0 ) continue;
            int x = (volumes[y] - volumes[z])/2;
            if(x <= 0 || volumes[y] - x <= 0) continue;

            vector<int> newVolumes = volumes;
            newVolumes[y] = newVolumes[y] - x;
            newVolumes[z] = newVolumes[z] + x;

            bool valid = true;
            for(int v : newVolumes){
                if(v != target){
                    valid = false;
                    break;
                }
            }

            if(valid){
                X = x;
                Y = y+1;
                Z = z+1;
                return true;
            }
        } 
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> volumes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> volumes[i];
    }

    if(semuaSama(volumes)){
        cout << "SESUAI" << endl;
        return 0;
    }

    int X,Y,Z;
    if (cobaTuang(volumes,X,Y,Z))
    {
        cout << X << " " << Y << " " << Z << endl;
    }else{
        cout << "TIDAK SESUAI" << endl;
    }
    return 0;
    
}
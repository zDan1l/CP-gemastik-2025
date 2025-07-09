// #include <bits/stdc++.h>
// using namespace std;

// void runtuhkan(vector<vector<int>>& matriks, int r, int c){
//     bool adaPerubahan = true;
//     while (adaPerubahan) {
//         adaPerubahan = false;
//         for (int i = r - 1; i > 0; i--) {
//             bool kosong = true;
//             for (int j = 0; j < c; j++) {
//                 if (matriks[i][j] != 0) {
//                     kosong = false;
//                     break;
//                 }
//             }
//             if (kosong) {
//                 swap(matriks[i], matriks[i - 1]);
//                 adaPerubahan = true;
//             }
//         }
//     }
// }


// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int r, c;
//     cin >> r >> c;
//     vector<vector<int>> matriks(r,vector<int>(c,0));

//     for (int i = 0; i < r; i++)
//     {
//         string input;
//         cin >> input;
//         for (int j = 0; j < c; j++)
//         {
//             matriks[i][j] = input[j]  - '0';
//         }
//     }

//     runtuhkan(matriks, r, c);
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << matriks[i][j];
//         }
//         cout << endl;
        
//     }
    
// }


#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n][n];
    int h1 = 0, c1 = 0, h2 = n - 1, c2 = n - 1;
    int dem = 1;
    while (dem <= n * n){
        for (int i = c1; i <= c2; i++){
            a[h1][i] = dem;
            ++dem;
        }
        h1++;
        for (int i = h1; i <= h2; i++){
            a[i][c2] = dem;
            dem++;
        }
        c2--;
        for (int i = c2; i >= c1; i--){
            a[h2][i] = dem;
            dem++;
        }
        h2--;
        for (int i = h2; i >= h1; i--){
            a[i][c1] = dem;
            dem++;
        }
        c1++;
    }
    for (int i = 0; i <  n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
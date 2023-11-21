#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        ll sum = 0;
        for (int j = 0; j < m; j++){
            sum += a[i][j];
        }
        cout << sum << ' ';
    }
    cout << endl;
    for (int i = 0; i < m; i++){
        ll tong = 0;
        for (int j = 0; j < n; j++){
            tong += a[j][i];
        }
        cout << tong << ' ';
    }
}
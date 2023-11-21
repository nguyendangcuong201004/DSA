#include <bits/stdc++.h>

using namespace std;

int a[1005][1005];

int main () {
    int n, m; cin >> n >> m;
    while (m--) {
        int dinh_1, dinh_2; cin >> dinh_1 >> dinh_2;
        a[dinh_1][dinh_2] = 1;
        a[dinh_2][dinh_1] = 1;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

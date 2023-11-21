#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;

    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int u, v;
    cin >> u >> v;
    u--; v--;
    for (int i = 0; i < n; i++){
        int tmp = a[i][u];
        a[i][u] = a[i][v];
        a[i][v] = tmp;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
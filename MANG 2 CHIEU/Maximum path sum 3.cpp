#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll a[1005][1005];
ll f[1005][1005];
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    ll max_value = -1117;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            f[j][i] = max({f[j - 1][i - 1], f[j][i - 1], f[j + 1][i - 1]}) + a[j][i];
        }
    }
    for (int j = 1; j <= n; j++){
        if (max_value < f[j][n]){
            max_value = f[j][n];
        }
    }
    cout << max_value;
}
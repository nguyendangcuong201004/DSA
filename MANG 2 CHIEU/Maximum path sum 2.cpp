#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll a[105][105];
ll f[105][105];
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    ll max_value = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            f[i][j] = max({f[i - 1][j], f[i - 1][j - 1], f[i - 1][j + 1]}) + a[i][j];
        }
    }
    for (int j = 1; j <= n; j++){
        if (max_value < f[n][j]){
            max_value = f[n][j];
        }
    }
    cout << max_value;
}
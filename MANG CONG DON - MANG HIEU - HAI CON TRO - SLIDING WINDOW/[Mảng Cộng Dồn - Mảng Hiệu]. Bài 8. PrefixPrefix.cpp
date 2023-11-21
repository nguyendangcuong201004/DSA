#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    int n, m, k; cin >> n >> m >> k;
    ll a[n];
    for (ll &x : a) cin >> x;
    ll D[n + 5];
    D[0] = a[0];
    for (int i = 1; i < n; i++){
        D[i] = a[i] - a[i - 1];
    }
    map <int, pair<pair<int, int>, int>> mp;
    for (int i = 1; i <= m; i++){
        int l, r, d; cin >> l >> r >> d;
        mp[i] = {{l, r}, d};
    }
    while (k--){
        int x, y; cin >> x >> y;
        for (int i = x; i <= y; i++){
            int l = mp[i].first.first;
            int r = mp[i].first.second;
            int d = mp[i].second;
            l--; r--;
            D[l] += d;
            D[r + 1] -= d;
        }
    }
    a[0] = D[0];
    cout << a[0] << " ";
    for (int i = 1; i < n; i++){
        a[i] = 1ll * a[i - 1] + 1ll * D[i];
        cout << a[i] << " ";
    }
}
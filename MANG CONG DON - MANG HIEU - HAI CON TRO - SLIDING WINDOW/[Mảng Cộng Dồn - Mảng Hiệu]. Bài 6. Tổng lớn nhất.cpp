#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int n, q; cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // mang hieu
    int D[n + 5] = {0};
    while (q--){
        int l, r; cin >> l >> r;
        l--; r--;
        D[l] += 1; D[r + 1] -= 1;
    }
    int F[n];
    F[0] = D[0];
    for (int i = 1; i < n; i++){
        F[i] = F[i - 1] + D[i];
    }
    sort(a, a + n, greater<int>());
    sort(F, F + n, greater<int>());
    ll ans = 0;
    for (int i = 0; i < n; i++){
        ans  += 1ll * a[i] * F[i];
    }
    cout << ans;
}
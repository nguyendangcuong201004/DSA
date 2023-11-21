#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    ll tong = 0;
    int ans = INT_MAX;
    int idx = -1;
    int l = 0;
    for (int r = 0; r < n; r++){
        tong += 1ll * a[r];
        if (tong >= k){
            while (tong >= k){
                tong -= a[l];
                l++;
            }
            if (ans > r - l + 2){
                ans = r - l + 2;
                idx = l - 1;
            }
        }
    }
    if (idx == -1){
        cout << -1;
    }
    else for (int i = idx; i < idx + ans; i++){
        cout << a[i] << ' ';
    }
}
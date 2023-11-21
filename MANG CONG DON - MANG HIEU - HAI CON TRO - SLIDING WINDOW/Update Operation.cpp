#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, q;
    cin >> n >> q;
    int a[n];
    int d[n + 1] = {0};
    for (int &x : a) cin >> x;
    d[0] = a[0];
    for (int i = 1; i < n; i++){
        d[i] = a[i] - a[i - 1];
    }
    while (q--){
        int l, r, k; cin >> l >> r >> k;
        d[l] += k;
        d[r + 1] -= k;
    }
    a[0] = d[0];
    cout << a[0] << ' ';
    for (int i = 1; i < n; i++){
        a[i] = a[i - 1] + d[i];
        cout << a[i] << ' ';
    }
}
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, q; cin >> n >> q;
    int a[n];
    for (int &x : a) cin >> x;
    ll p[n];
    p[0] = a[0];
    for (int i = 1; i < n; i++){
        p[i] = p[i - 1] + a[i];
    }
    while (q--){
        int l, r; cin >> l >> r;
        l--; if (l < 0){
            cout << p[r] << endl;
        }
        else cout << p[r] - p[l] << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    int n; cin >> n;
    int a[n];
    long long p[n];
    for (int &x : a) cin >> x;
    p[0] = a[0];
    for (int i = 1; i < n; i++){
        p[i] = p[i - 1] + a[i];
    }
    int q; cin >> q;
    while (q--){
        int l, r; cin >> l >> r;
        l--; r--;
        if (l <= 0){
            cout << p[r] << endl;
        }
        else cout << p[r] - p[l - 1] << endl;
    }
}
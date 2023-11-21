#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;



int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    ll f[n];
    f[0] = a[0];
    for (int i = 1; i < n; i++){
        f[i] = 1ll * f[i - 1] + 1ll * a[i];
    }
    for (ll x : f){
        cout << x << " ";
;    }
}
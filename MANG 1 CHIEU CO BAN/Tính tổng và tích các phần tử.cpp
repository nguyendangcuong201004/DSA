#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    ll a[n];
  
    for (ll &x : a){
        cin >> x;
    }
    ll sum = 0;
    ll tich = 1;
    for (int x : a){
        sum += 1ll * x;
        sum %= mod;
        tich *= 1ll * x;
        tich %= mod;
    }
    cout << sum << endl << tich;
}
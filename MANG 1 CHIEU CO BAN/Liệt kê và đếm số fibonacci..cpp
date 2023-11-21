#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(ll  n){
    ll f1 = 1; ll f0 = 0;
    if(n == f1 || n == f0){
        return true;
    }
    for (int i = 2; i <= 92; i++){
        ll fn = f1 + f0;
        if (n == fn){
            return true;
        }
        f0 = f1;
        f1 = fn;
    }
    return false;
}

int main(){
    int n; cin >> n;
    ll a[n];
    bool ok = true;
    for (ll &x : a){
        cin >> x;
    }
    for (ll x : a){
        if (check(x)){
            ok = false;
            cout << x << ' ';
        }
    }
    if (ok){
        cout << "NONE\n";
    }
}
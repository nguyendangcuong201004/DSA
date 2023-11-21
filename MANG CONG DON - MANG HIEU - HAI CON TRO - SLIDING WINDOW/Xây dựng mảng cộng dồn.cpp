#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    ll p[n];
    p[0] = a[0];
    for (int i = 1; i < n; i++){
        p[i] = p[i - 1] + a[i];
    }
    for (ll x : p){
        cout << x << ' ';
    }
}
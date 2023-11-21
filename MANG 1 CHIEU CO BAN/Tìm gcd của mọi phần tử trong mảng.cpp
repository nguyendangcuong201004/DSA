#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return (b, a % b);
}

int main(){
    int n; cin >> n;
    ll a[n];
  
    for (ll &x : a){
        cin >> x;
    }
    int k = gcd (0, a[0]);
    for (int i = 1; i < n; i++){
        k = gcd(k, a[i]);
    }
    cout << k << endl;
}
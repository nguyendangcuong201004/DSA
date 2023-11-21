#include <bits/stdc++.h>

using namespace std;
int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    long long max = 0;
    for (int j = 0; j < n; j++){
        max += 1ll * a[j] * j;
        max %= mod;
    }
    cout << max % mod << endl;
}
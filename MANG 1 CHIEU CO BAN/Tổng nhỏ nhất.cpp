#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a,a + n);
    long long a1 = 0; long long b1 = 0;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            a1 = 1ll * (a1 * 10) + a[i];
        }
        else b1 = 1ll * (b1 * 10) + a[i];
    }
    cout << a1 + b1 << endl;
}
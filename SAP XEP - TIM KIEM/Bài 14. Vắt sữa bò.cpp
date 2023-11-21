#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int sua = 1;
    sort(a, a + n, greater<int>());
    ll tong = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] - sua >= 0){
            tong += 1ll * (a[i] - sua);
            sua++;
        }
        else {
            break;
        }
    }

    cout << tong;
}
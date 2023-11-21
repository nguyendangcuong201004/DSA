#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    ll res = 0;
    for (int i = 0; i < n; i++){
        auto it = upper_bound(a + i + 1, a + n, k - a[i]);
        if (it != a + n){
            res += distance(it, a + n - 1) + 1;
        }
    }
    cout << res;
}

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    ll ans = 0;
    for (int i = 0; i < n; i++){
        int tmp = k - a[i];
        auto it = lower_bound(a + i + 1, a + n, tmp);
        if (*it == tmp){
            auto end = upper_bound(a + i + 1, a + n, tmp);
            end--;
            ans += 1ll * distance(it, end) + 1ll;
        }
    }
    cout << ans << endl;
}

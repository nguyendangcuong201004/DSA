#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    ll sum = 0;
    for (int i = 0; i < k; i++){
        sum += 1ll * a[i];
    }
    ll ans = sum;
    int idx = k - 1;
    for (int i = k; i < n; i++){
        sum = sum + 1ll * a[i] - 1ll * a[i - k];
        if (ans < sum){
            ans = sum;
            idx = i;
        }
    }
    cout << ans << endl;
    for (int j = idx - k + 1; j <= idx; j++){
        cout << a[j] << " ";
    }
}
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    ll sum = a[0];
    sort (a + 1, a + n, greater<int>());
    for (int i = 1; i < n; i++){
        if (i <= k){
            sum += 1ll * a[i];
        }
        else sum -= a[i];
    }
    cout << sum << endl;
}
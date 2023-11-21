#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    map <ll, int> mp;
    for (int &x : a) cin >> x;
    ll sum = 0;
    int res = INT_MAX;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (sum >= k){
            res = min (res, i + 1);
        }
        if (mp.count(sum - k)){
            res = min (res, i - mp[sum - k]);
        }
        mp[sum] = i;
    }
    if (res == INT_MAX){
        cout << -1;
    }
    else cout << res ;
}
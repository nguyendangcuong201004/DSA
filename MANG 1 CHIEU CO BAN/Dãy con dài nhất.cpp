#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    map <ll, int> mp;
    ll sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++){
        sum += a[i];
        sum = (sum % k + k) % k; // (sum % k + k) % k;  vd tong -3, -3 % 2 = -1, -1 + 2 = 1, 1 % 2 = 1
        if (sum % k == 0){
            ans = max (ans, i + 1);
        }
        if (mp.count(sum % k)){
            ans = max (ans, i - mp[sum % k]);
        }
        if (mp.count(sum % k) == 0){
            mp[sum % k] = i;
        }
    }
    cout << ans;
    
}
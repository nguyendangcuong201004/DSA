#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    map <ll, int> mp;
    ll sum = 0;
    int res = 0;
    int l = 0;
    for (int i = 0; i < n; i++){
        sum += 1ll * a[i];
        if (sum == k){
            res++;
            sum -= a[l];
            l++;
        }
        if (mp[sum - k]){
            res++;
        }
        mp[sum] = 1;
    }
    cout << res << endl;
}


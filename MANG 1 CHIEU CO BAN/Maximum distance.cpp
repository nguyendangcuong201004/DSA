#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    map <ll, int> mp;
    int res = INT_MIN;
    for (int i = 0; i < n; i++){
        if (mp.count(a[i] - k)){
            res = max (res, i - mp[a[i] - k]);
        }
        if (mp.count(a[i] + k)){
            res = max (res, i - mp[a[i] + k]);
        }
        if (!mp.count(a[i])){
            mp[a[i]] = i;
        }
    }
    if (res == INT_MIN){
        cout << -1;
    }
    else cout << res ;
}
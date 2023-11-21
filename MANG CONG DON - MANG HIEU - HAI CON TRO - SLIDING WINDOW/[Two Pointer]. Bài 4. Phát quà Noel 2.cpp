#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    int a[n];
    for (int &x : a) cin >> x;
    int res = INT_MAX;
    ll sum = 0;
    int l = 0;
    for (int r = 0; r < n; r++){
        sum += a[r];
        if (sum >= m){
            while (sum >= m){
                res = min(res, r - l + 1);
                sum -= a[l];
                ++l;
            }
        }
    }
    if (res == INT_MAX){
        cout << -1;
    }
    else cout << res;
}
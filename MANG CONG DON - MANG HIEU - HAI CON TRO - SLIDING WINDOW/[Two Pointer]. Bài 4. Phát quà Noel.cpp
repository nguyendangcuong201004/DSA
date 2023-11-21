#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    int a[n];
    for (int &x : a) cin >> x;
    int res = INT_MIN;
    int l = 0;
    ll sum = 0;
    for (int r = 0; r < n; r++){
        sum += a[r];
        while (sum > m){
            sum -= a[l];
            l++;
        }
        res = max (res, r - l + 1);
    }
    cout << res;
}
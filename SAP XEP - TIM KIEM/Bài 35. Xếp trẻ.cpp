#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort (a, a + n);
    int ans = 0;
    int l = 0; int r = n - 1;
    while (l <= r){
        if (a[l] + a[r] <= k){
            ans++;
            l++;
            r--;
        }
        else {
            ans++;
            r--;
        }
    }
    cout << ans << endl;
}
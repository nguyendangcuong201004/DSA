#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, l; cin >> n >> l;
    int a[n];
    for (int &x : a) cin >> x;
    sort (a,a + n);
    double ans = max (a[0], l - a[n - 1]);
    for (int i = 1; i < n; i++){
        if (ans < (a[i] - a[i - 1]) / 2.0){
            ans = (a[i] - a[i - 1]) / 2.0;
        }
    }
    cout << fixed << setprecision(10) << ans << endl;
}
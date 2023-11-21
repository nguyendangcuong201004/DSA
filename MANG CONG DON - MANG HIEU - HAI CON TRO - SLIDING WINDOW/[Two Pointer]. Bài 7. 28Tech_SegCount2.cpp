#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for (int &x : a) cin >> x;
    ll cnt = 0;
    ll sum = 0;
    int l = 0;
    for (int r = 0; r < n; r++){
        sum += 1ll * a[r];
        while (sum >= s){
            cnt += 1ll * (n - r); 
            sum -= a[l];
            l++;
        }
    }
    cout << cnt;
}
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    pair <ll,ll> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort (a, a + n);
    ll ans = 0;
    ll check_in = a[0].first + a[0].second;
    for (int i = 1; i < n; i++){
        if (a[i].first >= check_in){
            check_in = a[i].first + a[i].second;
        }
        else {
            check_in = check_in + a[i].second;
        }
    }
    cout << check_in;

}
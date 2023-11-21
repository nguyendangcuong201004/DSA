#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    ll ans = 0;
    int l = 0;
    multiset <int> s;
    for (int r = 0; r < n; r ++){
        s.insert(a[r]);
        while (*(s.rbegin()) - *(s.begin()) > k){
            auto it = s.find(a[l]);
            s.erase(it);
            ++l;
        }
        ans += r - l + 1;
    }
    cout << ans;
}
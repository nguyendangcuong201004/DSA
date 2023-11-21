#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    #include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort (a, a + n);
    ll tong1 = 1ll * abs(1ll * a[0] + 1ll * a[1]);
    ll tong2 = 1ll * abs(1ll * a[n - 2] + 1ll * a[n - 1]);
    if (tong1 > tong2){
        cout << tong1;
    }
    else cout << tong2;
}
}
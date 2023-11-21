#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

bool check(int a[], int n){
    for (int i = 0; i < n; i++){
        int l = i + 1; int r = n - 1;
        while (l <= r){
            if (1ll * a[l] * a[l] + 1ll * a[r] * a[r] == 1ll * a[i] * a[i]){
                return true;
            }
            else if (1ll * a[l] * a[l] + 1ll * a[r] * a[r] > 1ll * a[i] * a[i]){
                l++;
            }
            else r--;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort (a, a + n, greater<int>());
    if (check(a, n)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}
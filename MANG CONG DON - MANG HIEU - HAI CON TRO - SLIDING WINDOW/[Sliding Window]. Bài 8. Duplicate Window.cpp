#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check (int a[], int n, int k){
    for (int i = 1; i < n; i++){
        if (a[i] == a[i - 1] && i - (i - 1) <= k){
            return true;
        }
    }
    return false;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    if (check(a, n, k)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}
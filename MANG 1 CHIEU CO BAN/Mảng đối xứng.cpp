#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;

bool check(ll a[], int n){
    int l = 0; int r = n - 1;
    while (l <= r){
        if (a[l] != a[r]){
            return false;
        }
        l++; r--;
    }
    return true;
}

int main(){
    int n; cin >> n;
    ll a[n], b[n];
  
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if (check(a, n)){
        cout << "YES\n";
    }
    else cout << "NO\n";    
}	
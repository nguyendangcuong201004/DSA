#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;

void lat(ll a[], int n){
    int l = 0; int r = n - 1;
    while (l <= r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++; r--;
    }
}

int main(){
    int n; cin >> n;
    ll a[n], b[n];
  
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    lat(a, n);
    for (int i  : a){
        cout << i << ' ';
    }
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

bool check (int a[], int n){
    map <ll, int> mp;
    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (sum == 0){
            return true;
        }
        if (mp.count(sum)){
            return true;
        }
        mp[sum]++;
    }
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    if (check(a, n)){
        cout << 1;
    }
    else cout << -1;
}
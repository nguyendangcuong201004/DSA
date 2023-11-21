#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    ll sum = 0;
    int res = INT_MIN;
    map <ll, int> mp;
    int pos;
    for (int i = 0; i < n; i++ ){
        sum += a[i];
        if (sum == 0){
            if (res < i + 1){
                res = i + 1;
                pos = i;
            }
        }
        if (mp.count(sum)){
           if (res < i - mp[sum]){
                res = i - mp[sum];
                pos = i;
           }
        }
        if (mp.count(sum) == 0){
            mp[sum] = i;
        }
    }
    if (res == INT_MIN){
        cout << "NOT FOUND\n";
    }
    else {
        for (int i = pos - res + 1; i <= pos; i++){
            cout << a[i] << " ";
        }
    }
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    ll n, d;
    cin >> n >> d;
    ll a[n];
    for(ll &x : a){
        cin >> x;
    }
    ll res = 0;
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i - 1]){
            while (a[i] <= a[i - 1]){
                a[i] += d;
                res++;
            }
        }
    }
    cout << res << endl;
}
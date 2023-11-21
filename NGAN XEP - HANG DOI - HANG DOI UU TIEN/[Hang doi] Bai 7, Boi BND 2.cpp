#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> v;
vector<ll> res(505);

void khoi_tao(){
    queue<ll> q;
    q.push(1);
    v.push_back(1);
    while (1){
        ll t1 = q.front() * 10 + 0;
        ll t2 = q.front() * 10 + 1;
        q.pop();
        q.push(t1);
        q.push(t2);
        v.push_back(t1);
        v.push_back(t2);
        if (t1 >= 1e18 - 1){
            break;
        }
    }
    for (ll i = 1; i <= 500; i++){
        for (ll x : v){
            if (x % i == 0){
                res[i] = x;
                break;
            }
        }
    }
}

int main(){
    khoi_tao();
    int t; cin >> t;
    while (t--){
        int tmp; cin >> tmp;
        cout << res[tmp] << endl;
    }
}

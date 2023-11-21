#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> v;

void xuly (){
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
        if (t1 > 1e18){
            break;
        }
    }
}

int main(){
    xuly();
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        int dem = 0;
        for (ll x : v){
            if (x < n){
                dem++;
            }
            else break;
        }
        cout << dem << endl;
    }
}

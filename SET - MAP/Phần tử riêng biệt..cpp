#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;


int main(){
    int n; cin >> n;
    int a[n];
    map <int, int> mp;
    for (int &x : a) {
        cin >> x;
        mp[x] = 1;
    }
    for (int x : a){
        if (mp[x]){
            cout << x << ' ';
            mp[x] = 0;
        }
    }
}
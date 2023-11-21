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
    int cnt = 0;
    for (auto x : mp){
        if (x.second){
            cnt++;
        }
    }
    cout << cnt << endl;
}
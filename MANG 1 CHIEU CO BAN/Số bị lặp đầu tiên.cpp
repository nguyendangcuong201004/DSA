#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    int n; cin >> n;
    int a[n];
    map <int, int> mp;
    for (int &x : a) cin >> x;
    bool ok = true;
    mp[a[0]]++;
    for (int i = 1; i < n; i++){
        if (mp[a[i]]){
            cout << a[i] << endl;
            ok = false;
            return 0;
        }
        else mp[a[i]]++;
    }
    if (ok){
        cout << -1;
    }
}
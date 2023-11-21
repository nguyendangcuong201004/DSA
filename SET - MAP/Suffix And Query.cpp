#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    int n; cin >> n;
    int a[n];
    int p[n];
    set<int> s;
    for (int &x : a) cin >> x;
    for (int i = n - 1; i >= 0; i--){
        s.insert(a[i]);
        p[i] = s.size();
    }
    int q; cin >> q;
    while (q--){
        int k; cin >> k;
        cout << p[k] << endl;
    }
}
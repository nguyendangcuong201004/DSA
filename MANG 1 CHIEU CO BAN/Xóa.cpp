#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;

int main(){
    int n, m; cin >> n >> m;
    int a[n];
    for (int &x : a) cin >> x;
    bool ok = true;
    int pos = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == m){
            pos = i;
            ok = false;
            break;
        }
    }
    if (ok){
        cout << "NOT FOUND\n";
    }
    else {
        for (int i = pos; i < n; i++){
            a[i] = a[i + 1];
        }
        n--;
        for (int i = 0; i < n; i++){
            cout << a[i] << ' ';
        }
    }
}
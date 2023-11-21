#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    bool ok = false;
    for (int i = 0; i < n; i+=2){
        if (a[i] % 2 == 0){
            ok = true;
            cout << a[i] << ' ';
        }
    }
    if (ok == false){
        cout << "NONE\n";
    }
    return 0;
}
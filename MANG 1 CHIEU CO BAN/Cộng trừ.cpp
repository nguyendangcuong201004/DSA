#include <bits/stdc++.h>

using namespace std;

int cnt[10000001];

int main(){
    int n; cin >> n;
    int a[n]; int b[n - 1];
    for (int &x : a){
        cin >> x;
    }
    for (int &y : b){
        cin >> y;
    }
    int res = a[0];
    for (int i = 1; i < n; i++){
        if (b[i - 1] == 1){
            res += a[i];
        }
        else res -= a[i];
    }
    cout << res << endl;
}
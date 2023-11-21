#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (int *a, int n, int x){
    for (int i = 0; i < n; i++){
        int tmp = a[i] - x;
        auto it = lower_bound (a, a + n, tmp);
        if (*it == tmp){
            return true;
        }
    }
    return false;
}

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    sort (a, a + n);
    if (check(a, n, x)){
        cout << 1;
    }
    else cout << -1;
}
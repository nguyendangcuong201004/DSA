#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long res = 0;
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i - 1]){
            res += 1ll * a[i - 1] + 1ll - 1ll * a[i];
            a[i] = a[i - 1] + 1;
        }
    }
    cout << res << endl;
}
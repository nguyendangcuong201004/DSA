#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    int n, k; cin >> n >> k;
    int min_value = min(k, n - k);
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a + n);
    long long s1 = 0; ll s2 = 0;
    for (int i = 0; i < n; i++){
        if (i < min_value){
            s1 += 1ll * a[i];
        }
        else s2 += 1ll * a[i];
    }
    cout << s2 - s1 << endl;
}
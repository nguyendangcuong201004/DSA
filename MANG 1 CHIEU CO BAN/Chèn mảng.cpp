#include <bits/stdc++.h>

using namespace std;

int cnt[10000001];

int main(){
    int n, m, k; cin >> n >> m >> k;
    int a[n], b[m];
    int z = m + n;
    int c[z];
    for (int &x : a) cin >> x;
    for (int &y : b) cin >> y;
    for (int i = 0; i < k; i++){
        c[i] = a[i];
    }
    for (int i = k ; i < m + k; i++){
        c[i] = b[i - k];
    }
    for (int i = m + k; i < z; i++){
        c[i] = a[i - m];
    }
    for (int i = 0; i < z; i++){
        cout << c[i] << ' ';
    }
    return 0;
}
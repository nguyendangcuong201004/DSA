#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n], b[n];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for (int i =0; i < n; i++){
        cout << a[i] << ' ' << b[i] << ' ';
    }
}
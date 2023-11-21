#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int min = INT_MAX; int dem = 0;
    sort (a, a + n);
    for (int i = 1; i < n; i++){
        if (min > abs(a[i] - a[i - 1])){
            min = abs(a[i] - a[i - 1]);
        }
    }
    for (int i = 1; i < n; i++){
        if (min == abs(a[i] - a[i - 1])){
            dem++;
        }
    }
    cout << min << ' ' << dem;
}
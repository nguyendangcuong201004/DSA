#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    int dem = 1;
    for (int i = 1;i < n; i++){
        if (a[i] != a[i - 1]) dem++;
    }
    cout << dem << endl;
 }
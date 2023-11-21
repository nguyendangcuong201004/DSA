#include <bits/stdc++.h>

using namespace std;

using ll = long long;
int mod = 1e9 + 7;
int p[1000001];
bool check(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

bool kt(int a[], int n){
    int l = 0; int r = n - 1;
    while (l <= r){
        if (a[l] != a[r]){
            return false;
        }
        l++; r--;
    }
    return true;
}
int main (){
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    cout << *max_element(a, a + n) << " " << max_element(a, a + n) - a << endl;
    int min = INT_MAX; int vt_min = -1;
    int dem = 0;
    for (int i = 0; i <n ; i++){
        if (a[i] <= min){
            min = a[i];
            vt_min = i;
        }
        if (check(a[i])){
            dem++;
        }
    }
    cout << min << " " << vt_min << endl;
    cout << dem << endl;
    sort(a, a + n);
    if (1ll * a[0] * a[1] > 1ll * a[n - 2] * a[n - 1]){
        cout << 1ll * a[0] * a[1] << endl;
    }
    else cout << 1ll * a[n - 1] * a[n - 2] << endl;
    if (kt(b, n)){
        cout << "YES\n";
    }
    else cout << "NO\n";
    long long    tich = 1;
    for (int i = 0; i < n; i++){
        tich *= a[i] * 1ll;
        tich %= mod;
    }
    cout << tich << endl;
    
}    
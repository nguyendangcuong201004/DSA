#include <bits/stdc++.h>

using namespace std;

bool binary_search(int a[], int n, int x){
    int l = 0; int r = n - 1;
    while (l <= r){
        int mid = (l + r) / 2;
        if (a[mid] == x){
            return true;
        }
        else if (a[mid] < x){
            l = mid + 1;
        }
        else 
            r = mid - 1;
    }
    return false;
}


int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort (a, a + n);
    int q; cin >> q;
    while (q--){
        int m; cin >> m;
        if (binary_search(a, n, m)){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}
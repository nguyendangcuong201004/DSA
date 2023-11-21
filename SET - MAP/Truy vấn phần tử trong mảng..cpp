#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

bool binary_search(int a[], int n, int k){
    int l = 0; int r = n - 1;
    while (l <= r){
        int mid = (l + r) / 2;
        if (a[mid] == k){
            return true;
        }
        else if (a[mid] > k){
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) {
        cin >> x;
    }
    sort(a, a + n);
    int q; cin >> q;
    while (q--){
        int k; cin >> k;
        if (binary_search(a, n, k)){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}
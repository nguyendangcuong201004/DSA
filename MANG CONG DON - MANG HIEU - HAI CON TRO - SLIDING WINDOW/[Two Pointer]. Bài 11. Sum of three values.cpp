#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        int l = 0, r = n - 1;
        int t = k - a[i];
        while (l < r){
            if (r != i && l != i && a[l] + a[r] == t){
                cout << "YES\n";
                return 0;
            }
            if (r == i || a[l] + a[r] > t){
                r--;
            }
            else if (l == i || a[l] + a[r] < t){
                l++;
            }
        }
    }
    cout << "NO\n";
}
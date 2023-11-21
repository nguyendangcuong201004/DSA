#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int l = 0, r = n - 1;
            int t = k - a[i] - a[j];
            while (l < r){
                if (r != j && r != i && l != i && l != j && a[l] + a[r] == t){
                    cout << "YES\n";
                    return 0;
                }
                if (r ==j || r == i || a[l] + a[r] > t){
                    r--;
                }
                else if (l == j || l == i || a[l] + a[r] < t){
                    l++;
                }
            }
        }
    }
    cout << "NO\n";
}
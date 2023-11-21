#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    int cnt[100001] = {0};
    ll res = 0;
    int dem = 0;
    int l = 0;
    for (int r = 0; r < n; r++){
        cnt[a[r]]++;
        if (cnt[a[r]] == 1){
            dem++;
        }
        if (dem > k){
            while (dem > k){
                if (cnt[a[l]] == 1) --dem;
                cnt[a[l]]--;
                l++;
            }
        }
        res += r - l + 1;
    }
    cout << res;
}
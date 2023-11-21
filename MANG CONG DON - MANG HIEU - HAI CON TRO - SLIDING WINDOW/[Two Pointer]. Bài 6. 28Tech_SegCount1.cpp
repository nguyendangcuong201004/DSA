#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, tong; cin >> n >> tong;
    int a[n];
    for (int &x : a) cin >> x;
    int cnt = 0;
    ll sum = 0;
    int l = 0;
    for (int r = 0; r < n; r++){
        sum += a[r];
        if (sum <= tong){
            cnt += (r - l + 1);
        }
        else {
            while (sum > tong){
                sum -= a[l];
                l++;
            }
            cnt += (r - l + 1);
        }
    }
    cout << cnt;
}
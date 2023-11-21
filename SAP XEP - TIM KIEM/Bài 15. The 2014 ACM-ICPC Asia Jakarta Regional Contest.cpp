#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    int nhom = 1;
    for (int i = 1; i < n; i++){
        if (a[i] - a[i - 1] > k){
            nhom++;
        }
    }   
    cout << nhom;
}
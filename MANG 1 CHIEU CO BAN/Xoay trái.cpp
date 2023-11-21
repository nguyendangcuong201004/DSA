#include <bits/stdc++.h>

using namespace std;

int cnt[10000001];

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
     k = k % n;
    for (int i = k; i < n; i++){
        cout << a[i] << " ";
    }
    for (int i = 0; i < k; i++){
        cout << a[i] << " ";
    }
    return 0;
}
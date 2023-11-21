#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x , k; cin >> n >> x >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    n++;
    for (int i = n - 1; i >= k - 1; i--){
        a[i] = a[i - 1];
    }
    a[k - 1] = x;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
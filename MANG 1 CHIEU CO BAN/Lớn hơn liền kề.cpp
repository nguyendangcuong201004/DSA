#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    for (int i = 1; i < n - 1; i++){
        if (a[i] > a[i - 1] && a[i] > a[i + 1]){
            cout << a[i] << ' ';
        }
    }
}
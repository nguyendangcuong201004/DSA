#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    int h[n];
    h[0] = a[0];
    for (int i = 1; i < n; i++){
        h[i] = a[i] - a[i - 1];
    }
    for (int x : h){
        cout << x << ' ';
    }
}
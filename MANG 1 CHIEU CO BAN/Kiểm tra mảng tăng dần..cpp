#include <bits/stdc++.h>

using namespace std;

using ll = long long;
int mod = 1e9 + 7;
int p[1000001];

bool check(int a[], int n){
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i - 1]){
            return false;
        }
    }
    return true;
}

int main (){
    int n; cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    if (check(a, n)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}    
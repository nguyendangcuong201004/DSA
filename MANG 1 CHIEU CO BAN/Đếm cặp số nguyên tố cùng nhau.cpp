#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int mod = 1e9 + 7;
int p[1000001];

int main (){
    int n; cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (__gcd(a[i], a [j]) == 1) cnt++;
        }
    }
    cout << cnt;
}    
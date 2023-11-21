#include <bits/stdc++.h>

using namespace std;

int cnt[1000000];

bool check(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int tongr = 0;
        int tongp = 0;
        for (int j = 0; j < i; j++){
            tongr += a[j];
        }
        for (int k = i + 1; k < n; k++){
            tongp += a[k];
        }
        if (check(tongp) && check(tongr)){
            cout << i << ' ';
        }
    }
}
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (int n){
    if (n < 10){
        return true;
    }
    int tmp = n;
    int lat = 0;
    while (n){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if (lat == tmp){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if (check(a[i][j])){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
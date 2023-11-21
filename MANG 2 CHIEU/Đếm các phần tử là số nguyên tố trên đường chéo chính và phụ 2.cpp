#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
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
    int dem = 0;
    set <int> s;
    for (int i = 0; i < n; i++){
        if (check(a[i][i])){
            s.insert(a[i][i]);
        }
        if (check(a[i][n - 1 - i])){
            s.insert(a[i][n - 1 - i]);
        }
    }
    cout << s.size() ;
}
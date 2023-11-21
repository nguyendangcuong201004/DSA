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
    int b[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        sort (b[i], b[i]+ n);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << b[j][i] << ' ';
        }
        cout << endl;
    }
}
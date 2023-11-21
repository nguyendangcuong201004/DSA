#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll fibo[92];

void khoitao(){
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 92; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}


int main(){
    khoitao();
    int n;
    cin >> n;
    ll a[n][n];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int dem = 0;
    while (dem < n * n){
        for (int i =  c1; i <= c2; i++){
            a[h1][i] = fibo[dem];
            dem++;
        }
        h1++;
        for (int i = h1 ; i <= h2; i++){
            a[i][c2] = fibo[dem];
            dem++;
        }
        c2--;
        for (int i = c2; i >= c1; i--){
            a[h2][i] = fibo[dem];
            dem++;
        }
        h2--;
        for (int i = h2; i >= h1; i--){
            a[i][c1] = fibo[dem];
            dem++;
        }
        c1++;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
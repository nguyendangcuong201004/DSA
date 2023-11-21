#include <bits/stdc++.h>

using namespace std;

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
    int tong = 0; int dem = 0;
    for (int &x : a){
        cin >> x;
        if (check(x)){
            tong += x;
            dem++;
        }
       
    }
    cout << fixed << setprecision (3) << 1.0* tong / dem; << endl;
}
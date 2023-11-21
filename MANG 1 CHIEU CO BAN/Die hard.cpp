#include <bits/stdc++.h>

using namespace std;

using ll = long long;
int mod = 1e9 + 7;
int p[1000001];

bool check(int a[], int n){
    int d25 = 0; int d50 = 0; int d100 = 0;
    if (a[0] > 25){
        return false;
    }
    for (int i = 0; i < n; i++){
        if (a[i] == 25){
            d25++;
        }
        else if (a[i] == 50){
            if (d25 > 0){
                d25--;
                d50++;
            }
            else return false;
        }
        else if (a[i] == 100){
            if (d50 > 0 && d25 > 0){
                d50--; d25--; d100++;
            }
            else if (d25 >= 3){
                d25 -= 3;
                d100++;
            }
            else return false;
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
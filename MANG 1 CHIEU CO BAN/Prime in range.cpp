#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

bool p[1000001];

void kt(){
    for (int i = 0; i < 1000001; i++){
        p[i] = true;
    }
    p[0] = false;
    p[1] = false;
    for (int i = 2; i < sqrt(1000001); i++){
        if (p[i]){
            for (int j = i * i ; j < 1000001; j += i){
                p[j] = false;
            }
        }
    }
}

int F[1000001];

int main(){
    kt();
    int dem = 0;
    for (int i = 0; i < 1000001; i++){
        if (p[i]){
            ++dem;
        }
        F[i] = dem;
    }
    int q;
    cin >> q;
    while (q--){
        int r, l;
        cin >> l >> r;
        l--;
        if (l <= 0){
            cout << F[r] << endl;
        }
        else cout << F[r] - F[l] << endl;
    }
}
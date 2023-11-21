#include <bits/stdc++.h>

using namespace std;

int D[200005];
int F[200005];

int main(){
    int n, k, q; cin >> n >> k >> q;
    while (n--){
        int l , r; cin >> l >> r;
        l--; r--;
        D[l] += 1;
        D[r + 1] -= 1;
    }
    F[0] = D[0];
    for (int i = 1; i < 200005; i++){
        F[i] = F[i - 1] + D[i];
    } 
    while (q--){
        int l, r; cin >> l >> r;
        l--; r--;
        int dem = 0;
        for (int i = l; i <= r; i++){
            if (F[i] >= k){
                dem++;
            }
        }
        cout << dem << endl;
    }
}
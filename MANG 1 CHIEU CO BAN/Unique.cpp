#include <bits/stdc++.h>

using namespace std;

int cnt[10000001];

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    cnt[0] = a[0];
    int chay = 1;
    for (int i = 1; i < n; i++){
        if (a[i] != a[i - 1]){
            cnt[chay] = a[i];
            chay++;
        }
    }
    for (int i = 0; i < chay; i++){
        cout << cnt[i] << " ";
    }
}
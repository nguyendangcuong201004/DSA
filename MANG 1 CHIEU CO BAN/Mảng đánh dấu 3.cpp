#include <bits/stdc++.h>

using namespace std;

int cnt[10000001];

int main(){
    int n; cin >> n;
    int a[n];
    int dem = 0;
    for (int &x : a){
        cin >> x;
    }
    for (int i = 0; i < n; i++){
        cnt[ a[i] ]++;
    }
    for (int x : a){
        if (cnt[x]){
            cout << x << " " << cnt[x] << endl;
            cnt[x] = 0;
        }
    }

}
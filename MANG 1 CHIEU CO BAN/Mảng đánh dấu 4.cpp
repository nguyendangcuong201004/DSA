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
    int max = INT_MIN;
    int k;
    for (int i = 0; i < 10000001; i++){
        if (cnt[i]){
            if (max < cnt[i]){
                max = cnt[i];
                k = i;
            }
        }
    }
    cout << k << ' ' << max;
}
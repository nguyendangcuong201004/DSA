#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    int dem = 0;
    int i = 0; int j = 0;
    while (i < n && j < m){
        if (a[i] > b[j]){
            dem++;
            i++;
            j++;
        }
        else {
            i++;
        }
    }
    cout << dem << endl;
}
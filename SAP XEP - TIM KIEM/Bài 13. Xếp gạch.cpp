#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    int dem = 1;
    int docung = a[0];
    for (int i = 1; i < n; i++){
        if (dem <= docung + 1){
            dem++;
            docung = min (docung - 1, a[i]);
        }
    }
    cout << dem << endl;
}
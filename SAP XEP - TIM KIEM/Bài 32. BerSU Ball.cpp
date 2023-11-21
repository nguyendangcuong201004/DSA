#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort (a, a + n);
    sort (b, b + m);
    int i = 0; int j = 0;
    int dem = 0;
    while (i < n && j < m){
        if (abs(a[i] - b[j]) <= 1){
            dem++; i++; j++;
        }
        else if (a[i] > b[j]){
            j++;
        }
        else i++;
    }
    cout << dem << endl;
}
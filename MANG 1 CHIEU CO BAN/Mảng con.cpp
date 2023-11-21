#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &y : b) cin >> y;
    int idx = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == b[idx]){
            idx++;
        }
        if (idx == m){
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
}
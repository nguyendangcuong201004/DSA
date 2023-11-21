#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    int res = 0;
    int cnt = 1;
    int idx = 0;
    for (int i = 1; i < n; i++){
        if (a[i] != a[i - 1]){
            cnt ++;
        }
        else {
            cnt = 1;
        }
        if (res <= cnt){
            res = cnt;
            idx = i;
        }
    }
    cout << res << endl;
    for (int i = idx - res + 1; i <= idx; i++){
        cout << a[i] << " ";
    }
}
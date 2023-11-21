#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int mod = 1e9 + 7;
int p[1000001];

int main (){
    int n; cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    cout << abs(a[0] - a[1]) << " " << abs(a[0] - a[n - 1]) << endl;
    for (int i = 1; i < n - 1; i++){
        int x = abs(a[i] - a[i - 1]);
        int y = abs(a[i] - a[i + 1]);
        int b = abs (a[i] - a[0]);
        int c = abs(a[i] - a[n - 1]);
        cout << min(x, y) << ' ' << max(b, c) << endl;
    }
    cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0] << endl;
}    
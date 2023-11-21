#include <bits/stdc++.h>

using namespace std;

vector <int> a[1005];

int main () {
    int n, m; cin >> n >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        sort (a[i].begin(), a[i].end());
        for (int x : a[i]) {
            cout << x << ' ';
        }
        cout << endl;
    }
}

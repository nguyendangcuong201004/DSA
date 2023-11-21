#include <bits/stdc++.h>


using namespace std;

vector <int> a[1001];

int main (){
    int n, m; cin >> n >> m;
    while (m--) {
        int i, j; cin >> i >> j;
        a[i].push_back(j);
        a[j].push_back(i);
    }
    for (int i = 1; i <= n; i++){
        cout << i << " : ";
        sort (a[i].begin(), a[i].end());
        for (int x : a[i]) {
            cout << x << ' ';
        }

        cout << endl;
    }
}



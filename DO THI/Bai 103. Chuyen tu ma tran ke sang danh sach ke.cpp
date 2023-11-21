#include <bits/stdc++.h>


using namespace std;

vector <int> res[1005];

int main (){
    int n; cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
            if (a[i][j]) {
                res[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        sort (res[i].begin(), res[i].end());
        for (int x : res[i]) {
            cout << x << ' ';
        }
        cout << endl;
    }
}



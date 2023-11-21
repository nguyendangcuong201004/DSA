#include <bits/stdc++.h>
// 5
// 0 1 1 1 0
// 1 0 0 1 1
// 1 0 0 1 1
// 1 1 1 0 1
// 0 1 1 1 0


using namespace std;

vector <int> res[1005];

int main () {
    int n; cin >> n;
    multimap <int, int> mp;
    int a[n + 1][n + 1];
    int cnt[n + 1][n + 1] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j]) {
                res[i].push_back(j);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] && cnt[i][j] == 0) {
                mp.insert({j, i});
                cnt[i][j] = 1;
                cnt[j][i] = 1;
            }
        }
    }
    for (auto it : mp) {
        cout << it.first << ' ' << it.second << endl;
    } 
    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        sort (res[i].begin(), res[i].end());
        for (int x : res[i]) {
            cout << x <<  ' ';
        }
        cout << endl;
    }
}

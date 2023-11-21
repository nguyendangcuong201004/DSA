#include <bits/stdc++.h>


using namespace std;


int main (){
    int n; cin >> n;
    int a[n + 1][n + 1];
    int cnt[n + 1][n + 1] = {0};
    multimap <int, int> mp;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
            if (a[i][j] && i < j)  {
                mp.insert({i, j});
            }
        }
    }
    for (auto it : mp) {
        cout << it.first << ' ' << it.second << endl;
    }
}



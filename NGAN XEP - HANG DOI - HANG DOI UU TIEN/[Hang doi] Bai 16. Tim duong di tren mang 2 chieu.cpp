#include <bits/stdc++.h>

using namespace std;

int res[1005][1005];
int n, m;

int loang(int s, int t, int u, int v){
    queue<pair<pair<int, int>, int>> q;
    q.push({{s, t}, 0});
    set <pair<int,int>> se;
    se.insert({s, t});
    while (!q.empty()){
        auto x = q.front(); q.pop();
        int a = x.first.first;
        int b = x.first.second;
        int cnt = x.second;
        if (a == u && b == v){
            return cnt;
        }
        int i = a + res[a][b];
        int j = b + res[a][b];
        if (i >= 1 &&  i <= n && se.count({i, b}) == 0){
            q.push({{i, b}, cnt + 1});
        }
        if (j >= 1 && j <= m && se.count({a, j}) == 0){
            q.push({{a, j}, cnt + 1});
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while (t--){
        memset(res, 0, sizeof(res));
        cin >> n >> m;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cin >> res[i][j];
            }
        }
        cout << loang(1, 1, n, m) << endl;
    }
}



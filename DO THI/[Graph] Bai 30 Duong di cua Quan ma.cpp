#include <bits/stdc++.h>

using namespace std;

int n, s, t, u, v;
int a[1005][1005];

void nhap(){
    cin >> n >> s >> t >> u >> v;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {1, -1, 2, 2, 1, -1, -2, -2};

int bfs(){
    queue<pair<pair<int,int>, int>> q;
    q.push({{s, t}, 0});
    a[s][t] = 0;
    while (!q.empty()){
        auto it = q.front(); q.pop();
        if (it.first.first == u && it.first.second == v || it.first.second == u && it.first.first == v){
            return it.second;
        }
        for (int k = 0; k < 8; k++){
            int i1 = it.first.first + dx[k];
            int j1 = it.first.second + dy[k];
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
                q.push({{i1, j1}, it.second + 1});
                a[i1][j1] = 0;
            }
        }
    }
    return -1;
}

int main(){
    nhap();
    cout << bfs() << endl;
}

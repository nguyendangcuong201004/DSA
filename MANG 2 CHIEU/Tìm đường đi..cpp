#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, m, s, t, u, v;
int a[1005][1005];

void nhap (){
    cin >> n >> m >> s >> t >> u >> v;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void loang (int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1>= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1){
            loang(i1, j1);
        }
    }
}

int main(){
    nhap();
    loang(s, t);
    if (a[u][v]){
        cout << "NO\n";
    }
    else cout << "YES\n";
}

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, s, t, u, v;
int a[1005][1005];

void nhap (){
    cin >> n  >> s >> t >> u >> v;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {1, -1, 2, 2, 1, -1, -2, -2};

void loang (int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1>= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
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

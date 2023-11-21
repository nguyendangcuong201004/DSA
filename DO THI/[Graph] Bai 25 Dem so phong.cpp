#include <bits/stdc++.h>

using namespace std;

int n, m;
char a[1001][1001];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void dfs(int i, int j){
    a[i][j] = '#';
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == '.'){
            dfs(i1, j1);
        }
    }
}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i][j] == '.'){
                dem++;
                dfs(i, j);
            }
        }
    }
    cout << dem << endl;
    // 6 6
// ..###.
// ...#..
// #..#..
// .##.#.
// ######
// .#.##.
}

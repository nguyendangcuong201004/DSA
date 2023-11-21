#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int>ke[1000001];
int color[1000001];

bool ok = true;

void dfs(int u){
    for (int v : ke[u]){
        if (color[v] == 0){
            color[v] = 3 - color[u];
            dfs(v);
        }
        else {
            if (color[v] == color[u]){
                ok = false;
                return;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for (int i = 1; i <= n; i++){
        if (color[i] == 0){
            color[i] = 1;
            dfs(i);
        }
    }
    if (ok){
        cout << "YES\n";
    }
    else cout << "NO\n";
}

#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int>ke[1001];
int visited[1001];
int parent[1001];

bool dfs(int u){
    visited[u] = true;
    for (int v : ke[u]){
        if (!visited[v]){
            parent[v] = u;
            if (dfs(v)){
                return true;
            }
        }
        else {
            if (v != parent[u]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    bool ok = true;
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            if (dfs(i)){
                ok = false;
                break;
            }
        }
    }
    if (ok == true && m == n - 1){
        cout << 1 << endl;
    }
    else cout << 0 << endl;

}

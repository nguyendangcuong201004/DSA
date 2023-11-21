#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int>ke[1000001];
bool visited[1000001];

void dfs(int u){
    visited[u] = true;
    for (int v : ke[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
}

int tplt(){
    int dem = 0;
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            dem++;
            dfs(i);
        }
    }
    return dem;
}

int main(){ 
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int cc = tplt();
    int res = 0;
    for (int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        if (tplt() > cc){
            res++;
        }
    }
    cout << res << endl;
}

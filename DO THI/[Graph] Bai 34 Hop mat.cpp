#include <bits/stdc++.h>

using namespace std;

int k, n, m;

vector<int>ke[1000001];
bool visited[1000001];
int nguoi[1000001];
int d[1000001];

void dfs(int u){
    d[u]++;
    visited[u] = 1; 
    for (int v : ke[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
}


int main(){
    cin >> k >> n >> m;
    for (int i = 0; i < k; i++){
        cin >> nguoi[i];
    } 
    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
    for (int i = 0; i < k; i++){
        memset(visited, false, sizeof(visited));
        dfs(nguoi[i]);
    }
    int res = 0;
    for (int i = 1; i <= n; i++){
        if (d[i] == k){
            res++;
        }
    }
    cout << res << endl;
}

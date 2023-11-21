#include <bits/stdc++.h>

using namespace std;

int n, m;
bool visited[1000001];
vector <int> ke[1000001];
int id[1000001];
int dem = 0;
int cnt[1000001];

void dfs(int u){
    visited[u] = 1;
    id[u] = dem;
    for (int v : ke[u]){
        if (!visited[v]){
            dfs(v);
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
        if (!visited[i]){
            dem++;
            dfs(i);
        }
    }
    int max_val = 0;
    for (int i = 1; i <= n; i++){
        cnt[id[i]]++;
        max_val = max (max_val, cnt[id[i]]);
    }
    cout << max_val << endl;
}

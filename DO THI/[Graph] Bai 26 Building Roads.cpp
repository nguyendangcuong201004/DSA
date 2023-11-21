#include <bits/stdc++.h>

using namespace std;

int n, m;
bool visited[1000001];
vector<int>ke[1000001];
int id[1000001];

int dem = 0;

void dfs(int u){
    visited[u] = true;
    id[u] = dem;
    for (int v : ke[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
}

set <int> se;

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
    cout << dem - 1 << endl;
    for (int i = 1; i <= n; i++){
        if (id[1] != id[i] && se.count(id[i]) == 0){
            cout << 1 << ' ' << i << endl;
            se.insert(id[i]);
        }
    }
}

#include <bits/stdc++.h>

using namespace std;

int n, m;
int parent[1000001];
int sz[1000001];

void khoi_tao(){
    for (int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int u){
    if (u == parent[u]){
        return u;
    }
    return parent[u] = find(parent[u]);
}

void Union(int u, int v){
    u = find(u);
    v = find(v);
    if (u == v){
        return;
    }
    if (sz[u] < sz[v]) swap(u, v);
    sz[u] += sz[v];
    parent[v] = u;
}

int main(){
    cin >> n >> m;
    khoi_tao();
    vector<pair<int, int>> res;
    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        Union(x, y);
        int dem = 0, max_val = 0;
        for (int j = 1; j <= n; j++){
            if (j == parent[j]){
                dem++;
                max_val = max (max_val, sz[j]);
            }
        }
        res.push_back({dem, max_val});
    }
    for (auto it : res){
        cout << it.first << ' ' << it.second << endl;
    } 
}

#include <bits/stdc++.h>

using namespace std;

int n, m;
int parent[1000001];
int sz[1000001];

void init(){
    for (int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int u){
    if (u == parent[u]){ return u;}
    return parent[u] = find(parent[u]);
}

void gop(int u, int v){
    u = find(u);
    v = find(v);
    if (u == v){
        return;
    }
    if (sz[u] < sz[v]){
        swap(u, v);
    }
    parent[v] = u;
    sz[u] += sz[v];
}

int main(){
    cin >> n >> m;
    init();
    vector<pair<int,int>> v;
    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    for (auto it : v){
        gop(it.first, it.second);
    }
    for (int i = 1; i <= n; i++){
        if (i == parent[i]){
            cout << i << ' ';
        }
    }
}

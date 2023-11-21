#include <bits/stdc++.h>

using namespace std;

int n, m;
int parent[1000001];
int sz[1000001];
int canh[1000001];

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
        canh[u]++;
        return;
    }
    if (sz[u] < sz[v]){
        swap(u, v);
    }
    canh[u] += ++canh[v];
    sz[u] += sz[v];
    parent[v] = u;
}

bool check(){
    for (int i = 1; i <= n; i++){
        if (i == parent[i]){
            if (sz[i] * (sz[i] - 1) / 2 != canh[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int q; cin >> q;
    while (q--){
        cin >> n >> m;
        memset(parent, 0, sizeof(parent));
        memset(sz, 0, sizeof(sz));
        memset(canh, 0, sizeof(canh));
        khoi_tao();
        for (int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            Union(x, y);
        }
        if (check()){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}

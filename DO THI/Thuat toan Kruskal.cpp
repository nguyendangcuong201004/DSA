#include <bits/stdc++.h>

using namespace std;

struct edge{
    int x, y, w;
};

int n, m;
int parent[1000001];
int sz[1000001];
vector<edge> dscanh;

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

bool Union(int u, int v){
    u = find(u);
    v = find(v);
    if (u == v) return false;
    if (sz[u] < sz[v]){
        swap(u, v);
    }
    sz[u] += sz[v];
    parent[v] = u;
    return true;
}

void Kruskal(){
    sort (dscanh.begin(), dscanh.end(), [](edge a, edge b)->bool{
        return a.w < b.w;
    });
    int d = 0;
    vector<edge> MST;
    for (int i = 0; i < m; i++){
        if (MST.size() == n - 1){
            break;
        }
        edge e = dscanh[i];
        if (Union(e.x, e.y)){
            MST.push_back(e);
            d += e.w;
        }
    }
    cout << d << endl;
    for (auto it : MST){
        cout << it.x << ' ' << it.y << ' ' << it.w << endl;
    }
}

int main(){
    cin >> n >> m;    
    khoi_tao();
    for (int i = 0; i < m; i++){
        int x, y, w; cin >> x >> y >> w;
        dscanh.push_back({x, y, w});
    }
    Kruskal();
}

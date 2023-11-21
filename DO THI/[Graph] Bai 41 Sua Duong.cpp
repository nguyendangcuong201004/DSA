#include <bits/stdc++.h>

using namespace std;

struct canh{
    long long x, y, w;
    canh(long long a, long long b, long long c){
        x = a; y = b; w = c;
    }
};

int n, m;
vector<canh> dscanh;
int parent[1000001], sz[1000001];

void khoi_tao(){
    for (int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int u){
    if (u == parent[u]) return u;
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

bool cmp(canh a, canh b){
    return a.w < b.w;
}

void kruskal(){
    sort (dscanh.begin(), dscanh.end(), cmp);
    long long dem = 0;
    vector<canh>res;
    for (auto it : dscanh){
        if (Union(it.x, it.y)){
            dem += it.w;
            res.push_back(it);
        }
    }
    if (res.size() < n - 1){
        cout << "IMPOSIBALE\n";
    }
    else
        cout << dem << endl;
}

int main(){
    cin >> n >> m;
    khoi_tao();
    for (int i = 0; i < m; i++){
        long long x, y, w;
        cin >> x >> y >> w;
        dscanh.push_back({x, y, w});
    }
    kruskal();
}

#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int>ke[1001];
int visited[1001];
vector<pair<int,int>> dscanh;

void nhap() {
    cin >> n >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        dscanh.push_back({x, y});
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void dfs (int u, int s, int t) {
    visited[u] = 1;
    for (int v : ke[u]) {
        if ((s == u) && (t == v) || (s == v) && (u == t)) {
            continue;
        }
        if (!visited[v]) dfs(v,s,t);
    }
}

int tplt(int s, int t) {
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dem++;
            dfs(i, s, t);
        }
    }
    return dem;
} 

void canh_cau() {
    int cc = tplt(0, 0);
    int res = 0;
    for (auto it : dscanh) {
        memset(visited, 0, sizeof(visited));
        int x = it.first;
        int y = it.second;
        if (cc < tplt(x, y)) res++;
    }
    cout << res << endl;
}

int main () {
    nhap();
    canh_cau();;
}

// 10 8
// 10 9
// 10 8
// 10 3
// 10 4
// 5 3
// 10 1
// 5 1
// 5 4 -> 2

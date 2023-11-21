#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> ke[1001];
int visited[1001];

void nhap () {
    cin >> n >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void dfs(int u) {
    visited[u] = 1;
    for (int v : ke[u]) {
        if (!visited[v]) dfs(v);
    }
}

int tplt () {
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dem++;
            dfs(i);
        }
    }
    return dem;
}

void dinh_tru() {
    int cc = tplt();
    int res = 0;
    for (int i = 1; i <= n; i++) {
        memset(visited, 0, sizeof(visited));
        visited[i] = 1;
        if (cc < tplt()) {
            res++;
        }
    }
    cout << res << endl;
}

int main() {
    nhap();
    dinh_tru();
}


// 10 6
// 5 4
// 5 2
// 10 2
// 10 7
// 5 3
// 10 1

// -> 3

#include <bits/stdc++.h>

using namespace std;

int n, m, s, t;
vector <int> ke[1001];
int visited[1001];
int parent[1001];

void nhap () {
    cin >> n >> m >> s >> t;
    while (m--) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for (int i = 1; i <= n; i++){
        sort (ke[i].begin(), ke[i].end());
    }
}

void DFS(int u) {
    visited[u] = 1;
    for (int v : ke[u]) {
        if (!visited[v]) {
            parent[v] = u;
            DFS(v);
        }
    }
}

int main () {
    nhap () ;
    DFS(s);
    if (visited[t] == 0) {
        cout << "-1\n";
    }
    else {
        vector<int> res;
        while (t != s) {
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for (int x : res) {
            cout << x << ' ';
        }
    }
}

// 5 3 4 3
// 4 2
// 2 1
// 3 1

// 4 2 1 3



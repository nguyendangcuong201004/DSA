#include <bits/stdc++.h>

using namespace std;

int n, m, s;
vector <int> ke[1001];
int visited[1001];

void nhap () {
    cin >> n >> m >> s;
    while (m--) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
    for (int i = 1; i <= n; i++){
        sort (ke[i].begin(), ke[i].end());
    }
}

void DFS(int u) {
    visited[u] = 1;
    cout << u << ' ';
    for (int x : ke[u]) {
        if (!visited[x]) {
            DFS(x);
        }
    }
}

int main() {
    nhap ();
    DFS(s);
}

// 5 10 4
// 5 1
// 4 5
// 4 2
// 4 3
// 1 5
// 3 5
// 5 3
// 3 1
// 1 4
// 5 2
// 4 2 3 1 5 out

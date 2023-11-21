#include <bits/stdc++.h>

using namespace std;

int n, m, dem = 0;
vector <int> ke[1001];
int visited[1001];
int ID[1001];

void nhap () {
    cin >> n >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void BFS(int u) {
    visited[u] = 1;
    queue <int> q;
    q.push(u);
    while (!q.empty()) {
        int x = q.front();
        ID[x] = dem;
        q.pop();
        for (int y: ke[x]) {
            if (visited[y] == 0) {
                q.push(y);
                visited[y] = 1;
            }
        }
    }
}

int main () {
    nhap ();
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ++dem;
            BFS(i);
        }
    }
    int q; cin >> q;
    while (q--) {
        int s, t;
        cin >> s >> t;
        if (ID[s] == ID[t]) {
            cout << 1 << endl;
        }
        else cout << -1 << endl;
    }
}

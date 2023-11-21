#include <bits/stdc++.h>

using namespace std;

int n, m, start, finish;
vector <int> ke[1001];
int visited[1001];
int parent[1001];

void nhap() {
    cin >> n >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

bool bfs(int u) {
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        for (int y : ke[x]) {
            if (!visited[y]){
                parent[y] = x;
                q.push(y);
                visited[y] = 1;
            }
            else if (y != parent[x]) {
                return true;
            }
        }
    }
    return false;
}

bool dfs(int u) {
    visited[u] = 1;
    for (int v : ke[u]) {
        if (!visited[v]){
            parent[v] = u;
            if (dfs(v)) {
                return true;
            }
        }
        else if (v != parent[u]) {
            start = u;
            finish = v;
            return true;
        }
    }
    return false;
}



int main() {
    nhap();
    for (int i = 1; i <= n; i++){
        if (!visited[i]) {
            if (dfs(i)) {
                cout << "YES\n";
                vector <int> res;
                res.push_back(finish);
                while (start != finish){
                    res.push_back(start);
                    start = parent[start];
                }
                res.push_back(finish);
                reverse(res.begin(), res.end());
                for (int x : res) {
                    cout << x << ' ';
                }
                return 0;
            }
        }
    }
    cout << "No\n";
}

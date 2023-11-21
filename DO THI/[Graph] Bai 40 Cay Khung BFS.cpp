#include <bits/stdc++.h>

using namespace std;

int n, m, s;
vector<int>ke[1000001];
bool visited[1000001];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()){
        int tmp = q.front(); q.pop();
        for (int v : ke[tmp]){
            if (!visited[v]){
                cout << tmp << "->" << v << endl;
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main(){
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x); 
    }
    for (int i = 1; i <= n; i++){
        sort(ke[i].begin(), ke[i].end());
    }
    bfs(s);
}

// 9 18 4
// 9 3
// 5 4
// 5 1
// 5 2
// 7 5
// 4 3
// 8 5
// 4 2
// 2 1
// 9 4
// 7 2
// 8 6
// 9 7
// 4 1
// 6 1
// 9 1
// 6 3
// 7 1

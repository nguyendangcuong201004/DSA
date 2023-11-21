#include <bits/stdc++.h>

using namespace std;

int n, m, s;
vector<int>ke[1000001];
bool visited[1000001];

void dfs(int u){
    visited[u] = true;
    for (int v : ke[u]){
        if (!visited[v]){
            cout << u << "->"  << v << endl;
            dfs(v);
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
    dfs(s);
}

// 7 12 3
// 6 3
// 6 2
// 5 3
// 5 4
// 7 3
// 5 2
// 7 1
// 4 3
// 2 1
// 6 4
// 7 2
// 3 2

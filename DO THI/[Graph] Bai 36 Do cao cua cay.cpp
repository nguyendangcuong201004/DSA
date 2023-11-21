#include <bits/stdc++.h>

using namespace std;

int n;
vector<int>ke[1000001];
bool visited[1000001];
int chieu_cao[1000001];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()){
        int x = q.front(); q.pop();
        for (int v : ke[x]){
            if (!visited[v]){
                visited[v] = true;
                q.push(v);
                chieu_cao[v] = chieu_cao[x] + 1;
            }
        }
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n - 1; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    bfs(1);
    for (int i = 1; i <= n; i++){
        cout << chieu_cao[i] << ' ';
    }
}

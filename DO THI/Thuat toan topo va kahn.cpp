#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int>ke[1001];
int visited[1001];
vector<int> res;
int in[1001];

void dfs(int u){
    visited[u] = 1;
    for (int x : ke[u]){
        if (!visited[x]){
            dfs(x);
        }
    }
    res.push_back(u);
}

void kahn(){
    queue<int> q;
    for (int i = 1; i <= n; i++){
        if (in[i] == 0){
            q.push(i);
        }
    }
    while (!q.empty()){
        int u = q.front(); q.pop();
        res.push_back(u);
        for (int v : ke[u]){
            in[v]--;
            if (in[v] == 0){
                q.push(v);
            }
        }
    }
    for (int x : res){
        cout << x << ' ';
    }
}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        in[y]++;
    }
    for (int i = 1; i <= n; i++){
        sort(ke[i].begin(), ke[i].end());
    }   
    kahn();
}
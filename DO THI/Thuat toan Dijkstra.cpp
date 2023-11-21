#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> ii;

int n, m;
vector<ii>ke[1000001];
bool taken[100001];

void dijkstra(int st){
    taken[st] = true;
    vector <int> res (n + 1, 1e9);
    res[st] = 0;
    priority_queue<ii, vector<ii> , greater<ii>> q;
    q.push({0, st});
    while (!q.empty()){
        ii top = q.top(); q.pop();
        int u = top.second; int d = top.first;
        if (d > res[u]){
            continue;
        }
        for (ii it : ke[u]){
            int v = it.first, w = it.second;
            if (res[v] > res[u] + w){
                res[v] = res[u] + w;
                q.push({res[v], v});
            }
        }
    }
    for (int i = 1; i <= n; i++){
        cout << res[i] << ' ';
    }

}

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        ke[x].push_back({y, w});
        // ke[y].push_back({x, w});
    }
    dijkstra(1);
}

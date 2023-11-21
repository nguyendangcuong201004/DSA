#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> ii;

int n, m;
vector<ii> ke[100005];

void Dijkstra(int st){
	vector <int> res(n + 1, 1e9);
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({0, st});
    res[st] = 0;
	while (!q.empty()){
		ii top = q.top(); q.pop();
		int u = top.second; int d = top.first;
		if (d > res[u]) continue;
		for (auto it : ke[u]){
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
		int x, y, w; cin >> x >> y >> w;
		ke[x].push_back({y, w});
	}
	Dijkstra(1);
}

// 6 8
// 1 2 1
// 2 3 1
// 1 3 5
// 2 4 4 
// 3 5 2
// 5 4 2
// 4 6 2
// 5 6 7

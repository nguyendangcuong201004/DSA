#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> ii;

int n, m;
vector<ii>ke[10005];
int res[100001];

void Beman_Ford(int st){
	for (int i = 1; i <= n; i++){
		res[i] = 1e9;
	}
	res[st] = 0;
	for (int i = 0; i < n - 1; i++){
		for (int u = 1; u <= n; u++){
			for (ii it : ke[u]){
				int v = it.first, w = it.second;
				res[v] = min(res[v], res[u] + w);
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
		ke[y].push_back({x, w});
	}
	Beman_Ford(1);
}

#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> ii;
typedef long long ll;

int n, m;
vector <ii> ke[1000001];
int taken[1000001];

void Prim(int s){
    taken[s] = 1;
    priority_queue<ii, vector<ii>, greater<ii>> q;
    for (auto it : ke[s]){
        int t = it.first;
        if (!taken[t]){
            q.push({it.second, t});
        }
    }
    ll d = 0, dem = 0;
    while (!q.empty()){
        auto top = q.top(); q.pop();
        int u = top.second; int w = top.first;
        if (!taken[u]){
            dem++;
            d += w;
            taken[u] = 1;
            for (auto it : ke[u]){
                int t = it.first;
                if (!taken[t]){
                    q.push({it.second, t});
                }
            }
        }
    }
    if (dem == n - 1){
        cout << d << endl;
    }
    else cout << "imposible\n";

}

int main (){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int x, y, w; cin >> x >> y >> w;
        ke[x].push_back({y, w});
        ke[y].push_back({x, w});
    }
    Prim(1);
}

#include <bits/stdc++.h>

using namespace std;

int n, m;
int con_gian[10000001];
vector<int>ke[1000001];

int con_ca = 0;

void bfs(int u){
    queue<pair<int,int>> q;
    q.push({u, con_gian[u]});
    while (!q.empty()){
        auto tmp = q.front(); q.pop();
        if (ke[tmp.first].empty()){
            con_ca++;
        }
        else {
            for (int v : ke[tmp.first]){
                if (con_gian[v] == 0){
                    q.push({v, 0});
                }
                else if (tmp.second + con_gian[v] <= m){
                    q.push({v, tmp.second + con_gian[v]});
                }
            }
        }
    } 
}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> con_gian[i];
    }
    for (int i = 0; i < n - 1; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
    bfs(1);
    cout << con_ca << endl;
}

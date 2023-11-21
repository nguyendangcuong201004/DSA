#include <bits/stdc++.h>

using namespace std;

int n, m; 
vector<int>ke[1000001];
bool visited[1000001];
int bac[1000001];
set<int> res;
int nhomTruong = 0;


void nhap(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
        bac[x]++;
        bac[y]++;
    }
}

void dfs(int u){
    visited[u] = true;  
     if (bac[nhomTruong] < bac[u] || bac[nhomTruong] == bac[u] && nhomTruong > u){
        nhomTruong = u;
    }
    for (int v : ke[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    nhap();
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            nhomTruong = i;
            dfs(i);
            res.insert(nhomTruong);
        }
    }
    for (int x : res){
        cout << x << ' ';
    }
}

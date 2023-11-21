#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> ke[1001], t_ke[1001];
bool visited[1001];
stack<int> st;
int dem = 0;

void  input(){
    cin >> n >> m;
    while (m--){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        t_ke[y].push_back(x);
    }
}

void dfs1(int u){
    visited[u] = true;
    for (int v : ke[u]){
        if (!visited[v]){
            dfs1(v);
        }
    }
    st.push(u); // sap xep topo
}

void dfs2(int u){
    cout << u << ' ';
    visited[u] = true;
    for (int v : t_ke[u]){
        if (!visited[v]){
            dfs2(v);
        }
    }
}

void kosaraju(){
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            dfs1(i);
        }
    }
    memset(visited, false, sizeof(visited));
    while (!st.empty()){
        int top = st.top(); st.pop();
        if (!visited[top]){
            dem++;
            dfs2(top);
            cout << endl;
        }
    }
    cout << "So thanh phan lien thong manh : " << dem << endl;
}

int main(){
    input();
    kosaraju();
}
// 8 11
// 1 2
// 2 3
// 3 4
// 4 1
// 3 5
// 5 2
// 5 6
// 6 7
// 7 8
// 8 5
// 8 6
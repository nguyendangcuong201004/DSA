#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int>ke[1001], t_ke[1001];
int visited[1001];
stack <int> st;

void nhap(){
    cin >> n >> m;
    while (m--){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        t_ke[y].push_back(x);
    }
}

void dfs1(int u){ // sap xep topo u --> v// u se dung truoc v
    visited[u] = 1;
    for (int v: ke[u]){
        if (!visited[v]){
            dfs1(v);
        }
    }
    st.push(u);
}

void dfs2(int u){
    visited[u] = true;
    for (int v : t_ke[u]){
        if (!visited[v]){
            dfs2(v);
        }
    }
}

void kusaraju(){
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            dfs1(i);
        }
    }
    memset(visited, false, sizeof(visited));
    int dem = 0;
    while (!st.empty()){
        int top = st.top(); st.pop();
        if (!visited[top]){
            dem++;
            dfs2(top);
        }
    }
    cout << "So thanh phan lien thong : " << dem << endl;
}

int main(){
    nhap();
    kusaraju();
}

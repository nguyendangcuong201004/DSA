#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int>ke[1000001];
bool visited[1000001];
stack <int> st;
int deg[100001];
vector<int> res;

void nhap(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        deg[y]++;
    }
}

void kahn(){
    queue<int> q;
    for (int i = 1; i <= n; i++){
        if (deg[i] == 0){
            q.push(i);
        }
    }
    while (!q.empty()){
        int f = q.front(); q.pop();
        res.push_back(f);
        for (int v : ke[f]){
            deg[v]--;
            if (deg[v] == 0){
                q.push(v);
            }
        }
    }
}

void dfs(int u){
    visited[u] = true;
    for (int v : ke[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
    st.push(u);
}

int main(){
    nhap();
    // for (int i = 1; i <= n; i++){
    //     if (!visited[i]){
    //         dfs(i);
    //     }
    // }
    // while (!st.empty()){
    //     cout << st.top() << ' ';
    //     st.pop();
    // }
    kahn();
    if (res.size() < n){
        cout << "Co chu trinh\n";
    }
    else cout << "Khong co chu trinh\n";
}

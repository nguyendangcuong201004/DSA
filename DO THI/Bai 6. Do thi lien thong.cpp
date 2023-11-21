#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> ke[1001];
int visited[1001];

void dfs (int u) {
    visited[u] = 1;
    cout << u << ' ';
    for (int v : ke[u]){
        if (!visited[v]) {
            dfs(v);
        }
    }
}

void tplt () {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ++res;
            cout << "Thanh phan lien thong thu " << res << " la: ";
            dfs(i);
            cout << endl;
        }
    }
    if (res == 1) {
        cout << "Do thi lien thong \n";
    }
    else cout << "Do thi khong lien thong\n";
}

int main(){
    cin >> n >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        sort(ke[i].begin(), ke[i].end());
    }
    tplt();
}


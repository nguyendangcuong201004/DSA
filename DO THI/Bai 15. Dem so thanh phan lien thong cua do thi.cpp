#include <bits/stdc++.h>


using namespace std;

vector <int> ke[1005];
bool visited[1005];

vector <pair<int, int>> v;

int a[1005][1005];
int n, m;

void DFS1 (int u) {
    // cout << u << " ";
    visited[u] = true;
    for (int x : ke[u]) {
        if (visited[x] == false) {
            DFS1(x);
        }
    }
}

void DFS2 (int u) {
    cout << u << ' ';
    visited[u] = true;;
    for (int i = 1; i <= n; i++) {
        if (a[u][i] && visited[i] == false) {
            DFS2(i);
        }
    } 
}

void DFS3 (int u) {
    cout << u << ' ';
    visited[u] == true;
    for (auto it : v) {
        if (it.first == u) {
            if (visited[it.second] == false) {
                DFS3(it.second);
            }
        }
        if (it.second == u) {
            if (visited[it.first] == false) {
                DFS3(it.first);
            }
        }
    }
}

int main (){
    cin >> n >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int dem = 0;
    for (int i = 1; i <= n; i++){
        if (!visited[i]) {
            dem++;
            DFS1(i);
        }
    }
    cout << dem << endl;
}



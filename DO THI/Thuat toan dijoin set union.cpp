// Hoc ve dijoin set uinion

#include <bits/stdc++.h>

using namespace std;

int n;
int parent[1001];

void khoi_tao(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        parent[i] = i;
    }
}

int find(int u){
    while (u != parent[u]){
        u = parent[u];
    }
    return u;
}

bool Union(int s, int t){
    s = find(s);
    t = find(t);
    if (s == t){
        return false;
    }
    if (s < t){
        parent[t] = s;
    }
    else parent[s] = t;
    return true;
}

int main(){
    khoi_tao();
    cout << Union(6, 7) << endl;
    for (int i = 1; i <= n; i++){
        cout << i << ' ' << parent[i] << endl;
    }
}

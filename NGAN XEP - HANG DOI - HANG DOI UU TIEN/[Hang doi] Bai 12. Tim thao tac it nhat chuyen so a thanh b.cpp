#include <bits/stdc++.h>

using namespace std;

int bfs (int s, int t) {
    queue <pair<int,int>> q;
    q.push({s, 0}); 
    set<int> se;
    se.insert(s);
    while (!q.empty()){
        pair<int,int> x = q.front();
        q.pop();
        if (x.first == t) {
            return x.second;
        } 
        else {
            if (x.first > 1 && se.count(x.first - 1) == 0) {
                q.push({x.first - 1, x.second + 1});
            }
            if (se.count(x.first * 2) == 0 && x.first < t) {
                q.push({x.first * 2, x.second + 1});
            }
        }
    }
}

int main() {
    int q; cin >> q;
    while (q--)  {
        int s, t;
        cin >> s >> t;
        cout << bfs(s, t) << endl;
    }
} 

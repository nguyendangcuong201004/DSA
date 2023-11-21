#include <bits/stdc++.h>

using namespace std;

int bfs(int s) {
    queue<pair<int,int>> q;
    q.push({s, 0});
    set<int> se;
    se.insert(s);
    while (!q.empty()) {
        pair<int,int> x = q.front();
        q.pop();
        if (x.first == 1) {
            return x.second;
        }
        if (x.first > 1 && se.count(x.first - 1) == 0) {
            q.push({x.first - 1, x.second + 1});
            se.insert(x.first - 1);
        }
        for (int i = 2; i <= sqrt(x.first); i++){
            if (x.first % i == 0) {
                int max_value = max (i, x.first / i);
                if (se.count(max_value) == 0) {
                    q.push({max_value, x.second + 1});
                    se.insert(max_value);
                }
            }
        }
    }
    return -1;
}

int main() {
    int q; cin >> q;
    while (q--)  {
        int s;
        cin >> s;   
        cout << bfs(s) << endl;
    }
} 

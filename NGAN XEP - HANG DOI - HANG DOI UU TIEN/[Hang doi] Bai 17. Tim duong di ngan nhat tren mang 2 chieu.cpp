#include <bits/stdc++.h>

using namespace std;

int a[10][10];

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {1, -1, 2, 2, 1, -1, -2, -2};

int loang(int s, int t, int u, int v){
    queue <pair<pair<int, int>, int>> q;
    q.push({{s, t}, 0});
    while (!q.empty()){
        auto x = q.front();
        q.pop();
        int a = x.first.first;
        int b = x.first.second;
        int cnt = x.second;
        if (a == u && b == v){
            return cnt;
        }
        for (int k = 0; k < 8; k++){
            int i = a + dx[k];
            int j = b + dy[k];
            if (i >= 1 && i <= 8 && j >= 1 && j <= 8){
                q.push({{i, j}, cnt + 1});
            }
        }
    }
    return -1;   
}

int main(){
    int t; cin >> t;
    while (t--){
        string st, en; cin >> st >> en;
        int s = st[0] - '`';
        int t = st[1] - '0';
        int u = en[0] - '`';
        int v = en[1] - '0';
        cout << loang(s, t, u, v) << endl;
    }
}



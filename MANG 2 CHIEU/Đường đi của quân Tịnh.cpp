#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, s, t;
int a[1005][1005];

void nhap(){
    cin >> n >> s >> t;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

int dx[4] = {-1, -1, 1, 1};
int dy[4] = {-1, 1, -1, 1};

int cnt = 1;

void loang (int i, int j){
    a[i][j] = 1;
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 0){
            cnt++;
            loang (i1, j1);
        }
    }
}

int main (){
    nhap();
    loang(s, t);
    cout << cnt << endl;
}
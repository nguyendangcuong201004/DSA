#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, m, a[1005][1005];
int max_value = 0;
int cnt = 0;
void nhap (){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void loang (int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1){
            cnt++;
            loang(i1, j1);
        }
    }
}

int main(){
    nhap();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m ; j++){
            if (a[i][j] == 1){
                cnt++;
                loang(i, j);
            }
            else {
                max_value = max (max_value, cnt);
                cnt = 0;
            }
        }
    }
    cout <<  max_value;
}
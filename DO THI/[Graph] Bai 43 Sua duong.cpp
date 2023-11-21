#include <bits/stdc++.h>

using namespace std;

int n, m, s1, s2, t1, t2;
char a[1005][1005];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

bool ok = false;

void loang(int i, int j, int cnt, int pre){
    if (cnt > 3){
        return;
    }
    if (i == t1 && j == t2){
        ok = true;
        return;
    }
    a[i][j] = '*';
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != '*'){
            if (pre != k && cnt <= 2){
                loang(i1, j1, cnt + 1, k);
            }
            else loang(i1, j1, cnt, k);
        }
    }
    a[i][j] = '.';
}

int main (){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if (a[i][j] == 'S'){
                s1 = i; s2 = j;
            }
            else if (a[i][j] == 'T'){
                t1 = i; t2 = j;
            }
        }
    }
    loang(s1, s2, -1, 0);
    if (ok){
        cout << "YES\n";
    }
    else cout << "NO\n";
}

// 9 6
// **.*..
// .**..T
// .*..*.
// .....*
// ...***
// ...*S.
// *.....
// ****..
// .....*

// 6 10
// S...*...**
// ...*.*....
// ......*.T.
// .........*
// ...*.***..
// ....*.*...

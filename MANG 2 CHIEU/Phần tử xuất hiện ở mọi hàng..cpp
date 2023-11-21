#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n][n];
    map <int , int> mp;
    set<int> s;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int i = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            s.insert(a[i][j]);
        }
        for (int x : s){
            mp[x]++;
        }
        s.clear();
    }
    bool ok = true;
    for (auto it : mp){
        if (it.second == n){
            ok = false;
            cout << it.first << ' ';
        }
    }
    if (ok){
        cout << "NOT FOUND\n";
    }
}
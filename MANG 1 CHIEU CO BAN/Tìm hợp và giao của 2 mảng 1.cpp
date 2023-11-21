#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int mod = 1e9 + 7;
int p[1000001];

int main (){
    int n, m; cin >> n >> m;
    int a[n];
    int b[m];
    set <int> s;
    vector <int> v;
    unordered_map <int, int> mp1, mp2;
    for (int &x : a){
        cin >> x;
        s.insert(x);
        mp1[x] = 1;
    }
    for (int &y : b){
        cin >> y;
        s.insert(y);
        mp2[y] = 1;
    }
    for (int i : s){
        if (mp1[i] && mp2[i]){
            cout << i << " ";
        }
    }
    cout << endl;
    for (int x : s){
        cout << x << ' ';
    }
    
}    
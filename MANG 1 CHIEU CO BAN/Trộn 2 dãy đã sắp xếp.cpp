#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int mod = 1e9 + 7;
int p[1000001];

int main (){
    int n, m; cin >> n >> m;
    int a[n];
    int b[m];
    vector <int> v;
    for (int &x : a){
        cin >> x;
        v.push_back(x);
    }
    for (int &y : b){
        cin >> y;
        v.push_back(y);
    }
    sort (v.begin(), v.end());
    for (int x : v){
        cout << x << ' ';
    }
}    
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    map <int, int> m1, m2;
    for (int &x : a) {
        cin >> x;
        m1[x] = 1;
    }
    for (int &x : b){
        cin >> x;
        m2[x] = 1;
    }
    for (int x : a){
        if (m1[x] && m2[x]){
            cout << x << ' ';
            m1[x] = 0;
        }
    }
}
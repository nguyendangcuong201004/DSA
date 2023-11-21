#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    set <int> s;
    for (int &x : a) {
        cin >> x;
        s.insert(x);
    }
    for (int &x : b){
        cin >> x;
        s.insert(x);
    }
    for (auto i = s.rbegin(); i != s.rend(); i++){
        cout << *i << ' ';
    }
}
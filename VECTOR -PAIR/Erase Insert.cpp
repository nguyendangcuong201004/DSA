#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    vector <int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int q;
    cin >> q;
    while (q--){
        int tt; cin >> tt;
        if (tt == 1){
            int pos, val; cin >> pos >> val;
            if (pos >= 0 && pos <= v.size()){
                v.insert(v.begin() + pos, val);
            }
        }
        else {
            int pos; cin >> pos;
            if (pos >= 0 && pos < v.size()){
                v.erase(v.begin() + pos);
            }
        }
    }
    if (v.size()){
        for (int x : v){
            cout << x << ' ';
        }
    }
    else cout << "EMPTY\n";
}
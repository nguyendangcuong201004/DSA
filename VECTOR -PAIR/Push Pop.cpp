#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    vector <int> v;
    int q;
    cin >> q;
    while (q--){
        int tt; cin >> tt;
        if (tt == 1){
            int x; cin >> x;
            v.push_back(x);
        }
        else {
            int k = v.size();
            if (k > 0){
                v.pop_back();
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
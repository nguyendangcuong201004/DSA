#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    multiset <int> s;
    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    int tv; cin >> tv;
    while (tv--){
        int tt, x; cin >> tt >> x;
        if (tt == 1){
            s.insert(x);
        }
        else if (tt == 2){
            auto it1 = s.find(x);
            if (it1 != s.end()){
                s.erase(it1);
            }
        }
        else if (tt == 3){
            auto it2 = s.find(x);
            if (it2 != s.end()){
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
}
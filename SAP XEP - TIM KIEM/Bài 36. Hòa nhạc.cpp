#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    multiset <int> s;
    while (n--){
        int x; cin >> x;
        s.insert(x);
    }
    while (m--){
        int x; cin >> x;
        auto it = s.upper_bound(x);
        if (it != s.begin()){
            it--;
            cout << *it << endl;
            s.erase(it);
        }
        else cout << -1 << endl;
    }
    
}

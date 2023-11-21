#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    multiset <int> s;
    while (n--){
        int x;
        cin >> x;
        s.insert(x);
    }
    int q; cin >> q;
    while (q--){
        int tt; cin >> tt;
        if (tt == 1){
            int k; cin >> k;
            s.insert(k);
        }
        else if (tt == 2){
            int k; cin >> k;
            auto it = s.find(k);
            if (it != s.end()){
                s.erase(it);
            }
        }
        else if (tt == 3){
            int k; cin >> k;
            auto it = lower_bound(s.begin(), s.end(), k);
            if (it == s.end()){
                cout << -1 << endl;
            }
            else cout << *it << endl;
        }
        else {
            int x; cin >> x;
            auto it = lower_bound(s.begin(), s.end(), x);
            if (*it == x){
                cout << x << endl;
            }
            else {
                it--;
                if (*it < x){
                    cout << *it << endl;
                }
                else cout << -1 << endl;
            }
        }
    }
}
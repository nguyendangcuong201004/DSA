#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    int n; cin >> n;
    multiset <int> s;
    while (n--){
        int tmp; cin >> tmp;
        s.insert(tmp);
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
                s.erase(k);
            }
        }
        else if (tt == 3){
            cout << *(s.begin()) << endl;
        }
        else cout << *(s.rbegin()) << endl;
    }
}
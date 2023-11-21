#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector <pair<int, int>> v;
    set<int> s;
    while (n--){
        int tmp;
        cin >> tmp;
        if (s.count(tmp) == 0){
            s.insert(tmp);
            v.push_back({tmp, 1});
        }
        else {
            for (auto &x : v){
                if (x.first == tmp){
                    x.second++;
                }
            }
        }
    }
    for (auto x : v){
        cout << x.first << ' ' << x.second << endl;
    }
}
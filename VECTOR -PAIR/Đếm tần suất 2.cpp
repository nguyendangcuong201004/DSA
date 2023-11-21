#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector <pair<char, int>> v;
    set<char> s;
    while (n--){
        char tmp;
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
    cout << s.size() << endl;
    for (auto x : v){
        cout << x.first << ' ' << x.second << endl;
    }
}
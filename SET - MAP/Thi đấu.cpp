#include <bits/stdc++.h>

using namespace std;

int main(){
    int q; cin >> q;
    cin.ignore();
    map <string, vector<string>> mp;
    map <string, string> m;
    while (q--){
        string tmp;
        getline (cin, tmp);
        stringstream ss (tmp);
        string a, b;
        getline (ss, a, '-'); getline (ss, b, '-');
        int k = a.size() - 1;
        a.erase(k, 1);
        b.erase(0, 1);
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    for (auto x : mp){
        sort (x.second.begin(), x.second.end());
        cout << x.first << " : ";
        cout << x.second[0];
        for (int i = 1; i < x.second.size(); i++){
            cout << ", " << x.second[i];
        }
        cout << endl;
    }
}
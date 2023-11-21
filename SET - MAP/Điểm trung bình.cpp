#include <bits/stdc++.h>

using namespace std;

int main(){
    map <string, vector <pair<int, int>>> mp;
    set <string> s;
    vector <string> v;
    string tmp;
    while (getline (cin, tmp)){
        stringstream ss (tmp);
            string ten;
            int tc, diem;
            ss >> ten >> tc >> diem;
            if (s.count(ten) == 0){
                v.push_back(ten);
                s.insert(ten);
            }
            mp[ten].push_back({tc, diem});
    }
    sort (v.begin(), v.end(), greater<string>());
    for (string x : v){
        int tongtc = 0;
        int tong = 0;
        for (int i = 0; i < mp[x].size(); i++){
            tong += mp[x][i].first * mp[x][i].second;
            tongtc += mp[x][i].first;
        }
        cout << x << " : " << fixed << setprecision(2) << 1.0 * tong / tongtc << endl;
    }
}
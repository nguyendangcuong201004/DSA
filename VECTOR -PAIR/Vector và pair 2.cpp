#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector <pair<pair<int, int>, int>> v;
    while (n--){
        int x, y , z;
        cin >> x >> y >> z;
        v.push_back({{x,y},z});
    }
    for (int i = 0; i < v.size(); i++){
        cout << v[i].first.first + v[i].first.second + v[i].second << ' ';
    }
}
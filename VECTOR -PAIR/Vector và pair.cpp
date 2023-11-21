#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector <pair<int, int>> v;
    while (n--){
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    for (int i = 0; i < v.size(); i++){
        double d = sqrt(v[i].first * v[i].first + v[i].second * v[i].second);
        cout << fixed << setprecision (2) << d << ' ';
    }
}